#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_signal_16()
{
//=========Macro generated from canvas: Sphericity_signal_16/Sphericity_signal_16
//=========  (Thu Mar 23 11:54:01 2023) by ROOT version 6.26/06
   TCanvas *Sphericity_signal_16 = new TCanvas("Sphericity_signal_16", "Sphericity_signal_16",0,0,600,600);
   Sphericity_signal_16->SetHighLightColor(2);
   Sphericity_signal_16->Range(-0.2183529,-15.79954,1.171633,115.8633);
   Sphericity_signal_16->SetFillColor(0);
   Sphericity_signal_16->SetFillStyle(4000);
   Sphericity_signal_16->SetBorderMode(0);
   Sphericity_signal_16->SetBorderSize(2);
   Sphericity_signal_16->SetLeftMargin(0.15709);
   Sphericity_signal_16->SetRightMargin(0.1234783);
   Sphericity_signal_16->SetBottomMargin(0.12);
   Sphericity_signal_16->SetFrameFillStyle(1000);
   Sphericity_signal_16->SetFrameBorderMode(0);
   Sphericity_signal_16->SetFrameFillStyle(1000);
   Sphericity_signal_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(102.697);
   
   TH1F *st_stack_73 = new TH1F("st_stack_73","",25,0,1);
   st_stack_73->SetMinimum(0);
   st_stack_73->SetMaximum(102.697);
   st_stack_73->SetDirectory(0);
   st_stack_73->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_73->SetLineColor(ci);
   st_stack_73->GetXaxis()->SetTitle("Sphericity");
   st_stack_73->GetXaxis()->SetRange(1,25);
   st_stack_73->GetXaxis()->SetLabelFont(42);
   st_stack_73->GetXaxis()->SetTitleOffset(1);
   st_stack_73->GetXaxis()->SetTitleFont(42);
   st_stack_73->GetYaxis()->SetTitle("Event/0.04");
   st_stack_73->GetYaxis()->SetLabelFont(42);
   st_stack_73->GetYaxis()->SetTitleSize(0.037);
   st_stack_73->GetYaxis()->SetTitleFont(42);
   st_stack_73->GetZaxis()->SetLabelFont(42);
   st_stack_73->GetZaxis()->SetTitleOffset(1);
   st_stack_73->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_73);
   
   
   TH1D *VbbHcc_MC_Sphericity_stack_1 = new TH1D("VbbHcc_MC_Sphericity_stack_1","",25,0,1);
   VbbHcc_MC_Sphericity_stack_1->SetBinContent(1,73.94676);
   VbbHcc_MC_Sphericity_stack_1->SetBinContent(2,21.47839);
   VbbHcc_MC_Sphericity_stack_1->SetBinContent(3,12.52261);
   VbbHcc_MC_Sphericity_stack_1->SetBinContent(4,8.588354);
   VbbHcc_MC_Sphericity_stack_1->SetBinContent(5,6.294813);
   VbbHcc_MC_Sphericity_stack_1->SetBinContent(6,4.718447);
   VbbHcc_MC_Sphericity_stack_1->SetBinContent(7,3.92539);
   VbbHcc_MC_Sphericity_stack_1->SetBinContent(8,3.198037);
   VbbHcc_MC_Sphericity_stack_1->SetBinContent(9,2.588055);
   VbbHcc_MC_Sphericity_stack_1->SetBinContent(10,2.091955);
   VbbHcc_MC_Sphericity_stack_1->SetBinContent(11,1.899365);
   VbbHcc_MC_Sphericity_stack_1->SetBinContent(12,1.418367);
   VbbHcc_MC_Sphericity_stack_1->SetBinContent(13,1.243856);
   VbbHcc_MC_Sphericity_stack_1->SetBinContent(14,1.031928);
   VbbHcc_MC_Sphericity_stack_1->SetBinContent(15,0.8376305);
   VbbHcc_MC_Sphericity_stack_1->SetBinContent(16,0.5980372);
   VbbHcc_MC_Sphericity_stack_1->SetBinContent(17,0.4822549);
   VbbHcc_MC_Sphericity_stack_1->SetBinContent(18,0.2983738);
   VbbHcc_MC_Sphericity_stack_1->SetBinContent(19,0.06526181);
   VbbHcc_MC_Sphericity_stack_1->SetBinError(1,0.4798349);
   VbbHcc_MC_Sphericity_stack_1->SetBinError(2,0.2583102);
   VbbHcc_MC_Sphericity_stack_1->SetBinError(3,0.1973687);
   VbbHcc_MC_Sphericity_stack_1->SetBinError(4,0.1627327);
   VbbHcc_MC_Sphericity_stack_1->SetBinError(5,0.1391655);
   VbbHcc_MC_Sphericity_stack_1->SetBinError(6,0.1217123);
   VbbHcc_MC_Sphericity_stack_1->SetBinError(7,0.1095604);
   VbbHcc_MC_Sphericity_stack_1->SetBinError(8,0.1002293);
   VbbHcc_MC_Sphericity_stack_1->SetBinError(9,0.09049835);
   VbbHcc_MC_Sphericity_stack_1->SetBinError(10,0.07997075);
   VbbHcc_MC_Sphericity_stack_1->SetBinError(11,0.07695413);
   VbbHcc_MC_Sphericity_stack_1->SetBinError(12,0.06753218);
   VbbHcc_MC_Sphericity_stack_1->SetBinError(13,0.06205206);
   VbbHcc_MC_Sphericity_stack_1->SetBinError(14,0.0565738);
   VbbHcc_MC_Sphericity_stack_1->SetBinError(15,0.05005602);
   VbbHcc_MC_Sphericity_stack_1->SetBinError(16,0.04258752);
   VbbHcc_MC_Sphericity_stack_1->SetBinError(17,0.0384964);
   VbbHcc_MC_Sphericity_stack_1->SetBinError(18,0.02991202);
   VbbHcc_MC_Sphericity_stack_1->SetBinError(19,0.01376091);
   VbbHcc_MC_Sphericity_stack_1->SetEntries(54432);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_MC_Sphericity_stack_1->SetFillColor(ci);
   VbbHcc_MC_Sphericity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_MC_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_MC_Sphericity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_MC_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_MC_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_MC_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_MC_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_MC_Sphericity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_MC_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_MC_Sphericity_stack_1,"");
   
   TH1D *VbbHcc_MC_Sphericity_stack_2 = new TH1D("VbbHcc_MC_Sphericity_stack_2","",25,0,1);
   VbbHcc_MC_Sphericity_stack_2->SetBinContent(1,11.29173);
   VbbHcc_MC_Sphericity_stack_2->SetBinContent(2,2.704937);
   VbbHcc_MC_Sphericity_stack_2->SetBinContent(3,1.527053);
   VbbHcc_MC_Sphericity_stack_2->SetBinContent(4,1.095978);
   VbbHcc_MC_Sphericity_stack_2->SetBinContent(5,0.7946665);
   VbbHcc_MC_Sphericity_stack_2->SetBinContent(6,0.6542109);
   VbbHcc_MC_Sphericity_stack_2->SetBinContent(7,0.5101924);
   VbbHcc_MC_Sphericity_stack_2->SetBinContent(8,0.4368843);
   VbbHcc_MC_Sphericity_stack_2->SetBinContent(9,0.3332091);
   VbbHcc_MC_Sphericity_stack_2->SetBinContent(10,0.2470152);
   VbbHcc_MC_Sphericity_stack_2->SetBinContent(11,0.2214818);
   VbbHcc_MC_Sphericity_stack_2->SetBinContent(12,0.1683592);
   VbbHcc_MC_Sphericity_stack_2->SetBinContent(13,0.131648);
   VbbHcc_MC_Sphericity_stack_2->SetBinContent(14,0.1158766);
   VbbHcc_MC_Sphericity_stack_2->SetBinContent(15,0.07521782);
   VbbHcc_MC_Sphericity_stack_2->SetBinContent(16,0.05465315);
   VbbHcc_MC_Sphericity_stack_2->SetBinContent(17,0.04165828);
   VbbHcc_MC_Sphericity_stack_2->SetBinContent(18,0.02438227);
   VbbHcc_MC_Sphericity_stack_2->SetBinContent(19,0.005697036);
   VbbHcc_MC_Sphericity_stack_2->SetBinError(1,0.06567594);
   VbbHcc_MC_Sphericity_stack_2->SetBinError(2,0.03214106);
   VbbHcc_MC_Sphericity_stack_2->SetBinError(3,0.02413998);
   VbbHcc_MC_Sphericity_stack_2->SetBinError(4,0.0204688);
   VbbHcc_MC_Sphericity_stack_2->SetBinError(5,0.0174163);
   VbbHcc_MC_Sphericity_stack_2->SetBinError(6,0.01580849);
   VbbHcc_MC_Sphericity_stack_2->SetBinError(7,0.01393796);
   VbbHcc_MC_Sphericity_stack_2->SetBinError(8,0.01294307);
   VbbHcc_MC_Sphericity_stack_2->SetBinError(9,0.01125349);
   VbbHcc_MC_Sphericity_stack_2->SetBinError(10,0.009733004);
   VbbHcc_MC_Sphericity_stack_2->SetBinError(11,0.009214594);
   VbbHcc_MC_Sphericity_stack_2->SetBinError(12,0.008035146);
   VbbHcc_MC_Sphericity_stack_2->SetBinError(13,0.007084355);
   VbbHcc_MC_Sphericity_stack_2->SetBinError(14,0.006686482);
   VbbHcc_MC_Sphericity_stack_2->SetBinError(15,0.005360943);
   VbbHcc_MC_Sphericity_stack_2->SetBinError(16,0.004564241);
   VbbHcc_MC_Sphericity_stack_2->SetBinError(17,0.004021568);
   VbbHcc_MC_Sphericity_stack_2->SetBinError(18,0.003061251);
   VbbHcc_MC_Sphericity_stack_2->SetBinError(19,0.001441568);
   VbbHcc_MC_Sphericity_stack_2->SetEntries(54504);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_MC_Sphericity_stack_2->SetFillColor(ci);
   VbbHcc_MC_Sphericity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_MC_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_MC_Sphericity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_MC_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_MC_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_MC_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_MC_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_MC_Sphericity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_MC_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_MC_Sphericity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_MC_Sphericity_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_MC_Sphericity_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_signal_16->Modified();
   Sphericity_signal_16->cd();
   Sphericity_signal_16->SetSelected(Sphericity_signal_16);
}
