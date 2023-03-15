#ifdef __CLING__
#pragma cling optimize(0)
#endif
void overlay_jets_CSV_16()
{
//=========Macro generated from canvas: overlay_jets_CSV_16/overlay_jets_CSV_16
//=========  (Fri Mar 10 12:34:06 2023) by ROOT version 6.26/06
   TCanvas *overlay_jets_CSV_16 = new TCanvas("overlay_jets_CSV_16", "overlay_jets_CSV_16",0,0,600,600);
   gStyle->SetOptStat(0);
   overlay_jets_CSV_16->SetHighLightColor(2);
   overlay_jets_CSV_16->Range(-0.2,-0.1142256,1.133333,1.028031);
   overlay_jets_CSV_16->SetFillColor(0);
   overlay_jets_CSV_16->SetBorderMode(0);
   overlay_jets_CSV_16->SetBorderSize(2);
   overlay_jets_CSV_16->SetLeftMargin(0.15);
   overlay_jets_CSV_16->SetFrameBorderMode(0);
   overlay_jets_CSV_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   
   TH1F *st_stack_58 = new TH1F("st_stack_58","",20,0,1);
   st_stack_58->SetMinimum(0);
   st_stack_58->SetMaximum(0.9138049);
   st_stack_58->SetDirectory(0);
   st_stack_58->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_58->SetLineColor(ci);
   st_stack_58->GetXaxis()->SetTitle("BvL tagging score");
   st_stack_58->GetXaxis()->SetLabelFont(42);
   st_stack_58->GetXaxis()->SetTitleOffset(1);
   st_stack_58->GetXaxis()->SetTitleFont(42);
   st_stack_58->GetYaxis()->SetTitle("Events/0.05");
   st_stack_58->GetYaxis()->SetLabelFont(42);
   st_stack_58->GetYaxis()->SetTitleFont(42);
   st_stack_58->GetZaxis()->SetLabelFont(42);
   st_stack_58->GetZaxis()->SetTitleOffset(1);
   st_stack_58->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_58);
   
   
   TH1D *VbbHcc_jets_CSV_stack_1 = new TH1D("VbbHcc_jets_CSV_stack_1","",20,0,1);
   VbbHcc_jets_CSV_stack_1->SetBinContent(1,0.6531558);
   VbbHcc_jets_CSV_stack_1->SetBinContent(2,0.09722157);
   VbbHcc_jets_CSV_stack_1->SetBinContent(3,0.04652973);
   VbbHcc_jets_CSV_stack_1->SetBinContent(4,0.03045806);
   VbbHcc_jets_CSV_stack_1->SetBinContent(5,0.02217205);
   VbbHcc_jets_CSV_stack_1->SetBinContent(6,0.01779687);
   VbbHcc_jets_CSV_stack_1->SetBinContent(7,0.01398499);
   VbbHcc_jets_CSV_stack_1->SetBinContent(8,0.01159544);
   VbbHcc_jets_CSV_stack_1->SetBinContent(9,0.009824809);
   VbbHcc_jets_CSV_stack_1->SetBinContent(10,0.008715043);
   VbbHcc_jets_CSV_stack_1->SetBinContent(11,0.007806096);
   VbbHcc_jets_CSV_stack_1->SetBinContent(12,0.006978707);
   VbbHcc_jets_CSV_stack_1->SetBinContent(13,0.006014725);
   VbbHcc_jets_CSV_stack_1->SetBinContent(14,0.005289198);
   VbbHcc_jets_CSV_stack_1->SetBinContent(15,0.005100508);
   VbbHcc_jets_CSV_stack_1->SetBinContent(16,0.005032027);
   VbbHcc_jets_CSV_stack_1->SetBinContent(17,0.005010307);
   VbbHcc_jets_CSV_stack_1->SetBinContent(18,0.005318389);
   VbbHcc_jets_CSV_stack_1->SetBinContent(19,0.006896703);
   VbbHcc_jets_CSV_stack_1->SetBinContent(20,0.03509899);
   VbbHcc_jets_CSV_stack_1->SetBinError(1,0.0009971286);
   VbbHcc_jets_CSV_stack_1->SetBinError(2,0.0003869188);
   VbbHcc_jets_CSV_stack_1->SetBinError(3,0.0002687721);
   VbbHcc_jets_CSV_stack_1->SetBinError(4,0.0002175721);
   VbbHcc_jets_CSV_stack_1->SetBinError(5,0.0001857989);
   VbbHcc_jets_CSV_stack_1->SetBinError(6,0.000166217);
   VbbHcc_jets_CSV_stack_1->SetBinError(7,0.0001470436);
   VbbHcc_jets_CSV_stack_1->SetBinError(8,0.0001342935);
   VbbHcc_jets_CSV_stack_1->SetBinError(9,0.0001236704);
   VbbHcc_jets_CSV_stack_1->SetBinError(10,0.0001160643);
   VbbHcc_jets_CSV_stack_1->SetBinError(11,0.0001099154);
   VbbHcc_jets_CSV_stack_1->SetBinError(12,0.0001043665);
   VbbHcc_jets_CSV_stack_1->SetBinError(13,9.692912e-05);
   VbbHcc_jets_CSV_stack_1->SetBinError(14,9.022082e-05);
   VbbHcc_jets_CSV_stack_1->SetBinError(15,8.882028e-05);
   VbbHcc_jets_CSV_stack_1->SetBinError(16,8.797318e-05);
   VbbHcc_jets_CSV_stack_1->SetBinError(17,8.72757e-05);
   VbbHcc_jets_CSV_stack_1->SetBinError(18,9.022061e-05);
   VbbHcc_jets_CSV_stack_1->SetBinError(19,0.0001017704);
   VbbHcc_jets_CSV_stack_1->SetBinError(20,0.0002293387);
   VbbHcc_jets_CSV_stack_1->SetEntries(1294282);

   ci = TColor::GetColor("#ff0000");
   VbbHcc_jets_CSV_stack_1->SetLineColor(ci);
   VbbHcc_jets_CSV_stack_1->SetLineWidth(2);
   VbbHcc_jets_CSV_stack_1->GetXaxis()->SetRange(1,20);
   VbbHcc_jets_CSV_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_CSV_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_CSV_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_CSV_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_CSV_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_CSV_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_CSV_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_CSV_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_CSV_stack_1,"");
   
   TH1D *VbbHcc_jets_CSV_stack_2 = new TH1D("VbbHcc_jets_CSV_stack_2","",20,0,1);
   VbbHcc_jets_CSV_stack_2->SetBinContent(1,0.8702904);
   VbbHcc_jets_CSV_stack_2->SetBinContent(2,0.05347809);
   VbbHcc_jets_CSV_stack_2->SetBinContent(3,0.01920676);
   VbbHcc_jets_CSV_stack_2->SetBinContent(4,0.0101951);
   VbbHcc_jets_CSV_stack_2->SetBinContent(5,0.006502009);
   VbbHcc_jets_CSV_stack_2->SetBinContent(6,0.00461039);
   VbbHcc_jets_CSV_stack_2->SetBinContent(7,0.003491545);
   VbbHcc_jets_CSV_stack_2->SetBinContent(8,0.002776651);
   VbbHcc_jets_CSV_stack_2->SetBinContent(9,0.002254278);
   VbbHcc_jets_CSV_stack_2->SetBinContent(10,0.001921874);
   VbbHcc_jets_CSV_stack_2->SetBinContent(11,0.001709982);
   VbbHcc_jets_CSV_stack_2->SetBinContent(12,0.00150828);
   VbbHcc_jets_CSV_stack_2->SetBinContent(13,0.001355976);
   VbbHcc_jets_CSV_stack_2->SetBinContent(14,0.001282669);
   VbbHcc_jets_CSV_stack_2->SetBinContent(15,0.001240569);
   VbbHcc_jets_CSV_stack_2->SetBinContent(16,0.001295157);
   VbbHcc_jets_CSV_stack_2->SetBinContent(17,0.001324217);
   VbbHcc_jets_CSV_stack_2->SetBinContent(18,0.001494522);
   VbbHcc_jets_CSV_stack_2->SetBinContent(19,0.002122328);
   VbbHcc_jets_CSV_stack_2->SetBinContent(20,0.01193921);
   VbbHcc_jets_CSV_stack_2->SetBinError(1,0.0001439606);
   VbbHcc_jets_CSV_stack_2->SetBinError(2,3.536789e-05);
   VbbHcc_jets_CSV_stack_2->SetBinError(3,2.116e-05);
   VbbHcc_jets_CSV_stack_2->SetBinError(4,1.540036e-05);
   VbbHcc_jets_CSV_stack_2->SetBinError(5,1.230044e-05);
   VbbHcc_jets_CSV_stack_2->SetBinError(6,1.035599e-05);
   VbbHcc_jets_CSV_stack_2->SetBinError(7,8.991576e-06);
   VbbHcc_jets_CSV_stack_2->SetBinError(8,8.009993e-06);
   VbbHcc_jets_CSV_stack_2->SetBinError(9,7.211887e-06);
   VbbHcc_jets_CSV_stack_2->SetBinError(10,6.64629e-06);
   VbbHcc_jets_CSV_stack_2->SetBinError(11,6.264085e-06);
   VbbHcc_jets_CSV_stack_2->SetBinError(12,5.872289e-06);
   VbbHcc_jets_CSV_stack_2->SetBinError(13,5.556657e-06);
   VbbHcc_jets_CSV_stack_2->SetBinError(14,5.399705e-06);
   VbbHcc_jets_CSV_stack_2->SetBinError(15,5.295655e-06);
   VbbHcc_jets_CSV_stack_2->SetBinError(16,5.407296e-06);
   VbbHcc_jets_CSV_stack_2->SetBinError(17,5.463132e-06);
   VbbHcc_jets_CSV_stack_2->SetBinError(18,5.78597e-06);
   VbbHcc_jets_CSV_stack_2->SetBinError(19,6.885684e-06);
   VbbHcc_jets_CSV_stack_2->SetBinError(20,1.639562e-05);
   VbbHcc_jets_CSV_stack_2->SetEntries(1.996322e+09);

   ci = TColor::GetColor("#ff0000");
   VbbHcc_jets_CSV_stack_2->SetLineColor(ci);
   VbbHcc_jets_CSV_stack_2->SetLineStyle(2);
   VbbHcc_jets_CSV_stack_2->SetLineWidth(2);
   VbbHcc_jets_CSV_stack_2->GetXaxis()->SetRange(1,20);
   VbbHcc_jets_CSV_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_CSV_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_CSV_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_CSV_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_CSV_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_CSV_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_CSV_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_CSV_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_CSV_stack_2,"");
   st->Draw("nostack,hist");
   
   TLegend *leg = new TLegend(0.6,0.7,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.025);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_CSV_stack_1","CSV (signal)","L");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_jets_CSV_stack_2","CSV (bckg)","L");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   overlay_jets_CSV_16->Modified();
   overlay_jets_CSV_16->cd();
   overlay_jets_CSV_16->SetSelected(overlay_jets_CSV_16);
}
