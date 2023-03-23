#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_signal_16()
{
//=========Macro generated from canvas: Aplanarity_signal_16/Aplanarity_signal_16
//=========  (Thu Mar 23 11:52:36 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_signal_16 = new TCanvas("Aplanarity_signal_16", "Aplanarity_signal_16",0,0,600,600);
   Aplanarity_signal_16->SetHighLightColor(2);
   Aplanarity_signal_16->Range(-0.2183529,-16.62015,1.171633,121.8811);
   Aplanarity_signal_16->SetFillColor(0);
   Aplanarity_signal_16->SetFillStyle(4000);
   Aplanarity_signal_16->SetBorderMode(0);
   Aplanarity_signal_16->SetBorderSize(2);
   Aplanarity_signal_16->SetLeftMargin(0.15709);
   Aplanarity_signal_16->SetRightMargin(0.1234783);
   Aplanarity_signal_16->SetBottomMargin(0.12);
   Aplanarity_signal_16->SetFrameFillStyle(1000);
   Aplanarity_signal_16->SetFrameBorderMode(0);
   Aplanarity_signal_16->SetFrameFillStyle(1000);
   Aplanarity_signal_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(108.0309);
   
   TH1F *st_stack_67 = new TH1F("st_stack_67","",50,0,1);
   st_stack_67->SetMinimum(0);
   st_stack_67->SetMaximum(108.0309);
   st_stack_67->SetDirectory(0);
   st_stack_67->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_67->SetLineColor(ci);
   st_stack_67->GetXaxis()->SetTitle("Aplanarity");
   st_stack_67->GetXaxis()->SetRange(1,50);
   st_stack_67->GetXaxis()->SetLabelFont(42);
   st_stack_67->GetXaxis()->SetTitleOffset(1);
   st_stack_67->GetXaxis()->SetTitleFont(42);
   st_stack_67->GetYaxis()->SetTitle("Event/0.02");
   st_stack_67->GetYaxis()->SetLabelFont(42);
   st_stack_67->GetYaxis()->SetTitleSize(0.037);
   st_stack_67->GetYaxis()->SetTitleFont(42);
   st_stack_67->GetZaxis()->SetLabelFont(42);
   st_stack_67->GetZaxis()->SetTitleOffset(1);
   st_stack_67->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_67);
   
   
   TH1D *VbbHcc_MC_Aplanarity_stack_1 = new TH1D("VbbHcc_MC_Aplanarity_stack_1","",50,0,1);
   VbbHcc_MC_Aplanarity_stack_1->SetBinContent(1,80.88288);
   VbbHcc_MC_Aplanarity_stack_1->SetBinContent(2,23.37656);
   VbbHcc_MC_Aplanarity_stack_1->SetBinContent(3,13.01422);
   VbbHcc_MC_Aplanarity_stack_1->SetBinContent(4,8.682736);
   VbbHcc_MC_Aplanarity_stack_1->SetBinContent(5,5.799137);
   VbbHcc_MC_Aplanarity_stack_1->SetBinContent(6,4.262052);
   VbbHcc_MC_Aplanarity_stack_1->SetBinContent(7,3.162217);
   VbbHcc_MC_Aplanarity_stack_1->SetBinContent(8,2.278984);
   VbbHcc_MC_Aplanarity_stack_1->SetBinContent(9,1.668182);
   VbbHcc_MC_Aplanarity_stack_1->SetBinContent(10,1.236097);
   VbbHcc_MC_Aplanarity_stack_1->SetBinContent(11,0.90638);
   VbbHcc_MC_Aplanarity_stack_1->SetBinContent(12,0.604327);
   VbbHcc_MC_Aplanarity_stack_1->SetBinContent(13,0.4820648);
   VbbHcc_MC_Aplanarity_stack_1->SetBinContent(14,0.3140127);
   VbbHcc_MC_Aplanarity_stack_1->SetBinContent(15,0.229041);
   VbbHcc_MC_Aplanarity_stack_1->SetBinContent(16,0.1653407);
   VbbHcc_MC_Aplanarity_stack_1->SetBinContent(17,0.0838001);
   VbbHcc_MC_Aplanarity_stack_1->SetBinContent(18,0.03897618);
   VbbHcc_MC_Aplanarity_stack_1->SetBinContent(19,0.01267316);
   VbbHcc_MC_Aplanarity_stack_1->SetBinContent(20,0.01894335);
   VbbHcc_MC_Aplanarity_stack_1->SetBinContent(21,0.00926333);
   VbbHcc_MC_Aplanarity_stack_1->SetBinError(1,0.5036405);
   VbbHcc_MC_Aplanarity_stack_1->SetBinError(2,0.2683356);
   VbbHcc_MC_Aplanarity_stack_1->SetBinError(3,0.2007184);
   VbbHcc_MC_Aplanarity_stack_1->SetBinError(4,0.1633226);
   VbbHcc_MC_Aplanarity_stack_1->SetBinError(5,0.1333912);
   VbbHcc_MC_Aplanarity_stack_1->SetBinError(6,0.1145386);
   VbbHcc_MC_Aplanarity_stack_1->SetBinError(7,0.0980266);
   VbbHcc_MC_Aplanarity_stack_1->SetBinError(8,0.08330413);
   VbbHcc_MC_Aplanarity_stack_1->SetBinError(9,0.07120443);
   VbbHcc_MC_Aplanarity_stack_1->SetBinError(10,0.06110476);
   VbbHcc_MC_Aplanarity_stack_1->SetBinError(11,0.05220325);
   VbbHcc_MC_Aplanarity_stack_1->SetBinError(12,0.04302564);
   VbbHcc_MC_Aplanarity_stack_1->SetBinError(13,0.03857118);
   VbbHcc_MC_Aplanarity_stack_1->SetBinError(14,0.03090934);
   VbbHcc_MC_Aplanarity_stack_1->SetBinError(15,0.02690036);
   VbbHcc_MC_Aplanarity_stack_1->SetBinError(16,0.02288759);
   VbbHcc_MC_Aplanarity_stack_1->SetBinError(17,0.0158623);
   VbbHcc_MC_Aplanarity_stack_1->SetBinError(18,0.01082924);
   VbbHcc_MC_Aplanarity_stack_1->SetBinError(19,0.005832763);
   VbbHcc_MC_Aplanarity_stack_1->SetBinError(20,0.007287391);
   VbbHcc_MC_Aplanarity_stack_1->SetBinError(21,0.005355275);
   VbbHcc_MC_Aplanarity_stack_1->SetEntries(54432);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_MC_Aplanarity_stack_1->SetFillColor(ci);
   VbbHcc_MC_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_MC_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_MC_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_MC_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_MC_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_MC_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_MC_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_MC_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_MC_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_MC_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_MC_Aplanarity_stack_2 = new TH1D("VbbHcc_MC_Aplanarity_stack_2","",50,0,1);
   VbbHcc_MC_Aplanarity_stack_2->SetBinContent(1,8.782801);
   VbbHcc_MC_Aplanarity_stack_2->SetBinContent(2,4.135421);
   VbbHcc_MC_Aplanarity_stack_2->SetBinContent(3,2.496218);
   VbbHcc_MC_Aplanarity_stack_2->SetBinContent(4,1.631569);
   VbbHcc_MC_Aplanarity_stack_2->SetBinContent(5,1.08966);
   VbbHcc_MC_Aplanarity_stack_2->SetBinContent(6,0.7469549);
   VbbHcc_MC_Aplanarity_stack_2->SetBinContent(7,0.5268661);
   VbbHcc_MC_Aplanarity_stack_2->SetBinContent(8,0.3537564);
   VbbHcc_MC_Aplanarity_stack_2->SetBinContent(9,0.2369515);
   VbbHcc_MC_Aplanarity_stack_2->SetBinContent(10,0.1570749);
   VbbHcc_MC_Aplanarity_stack_2->SetBinContent(11,0.1136407);
   VbbHcc_MC_Aplanarity_stack_2->SetBinContent(12,0.0721265);
   VbbHcc_MC_Aplanarity_stack_2->SetBinContent(13,0.04010073);
   VbbHcc_MC_Aplanarity_stack_2->SetBinContent(14,0.01709526);
   VbbHcc_MC_Aplanarity_stack_2->SetBinContent(15,0.01129798);
   VbbHcc_MC_Aplanarity_stack_2->SetBinContent(16,0.009896764);
   VbbHcc_MC_Aplanarity_stack_2->SetBinContent(17,0.005885364);
   VbbHcc_MC_Aplanarity_stack_2->SetBinContent(18,0.003645594);
   VbbHcc_MC_Aplanarity_stack_2->SetBinContent(19,0.003075627);
   VbbHcc_MC_Aplanarity_stack_2->SetBinContent(20,0.0008169755);
   VbbHcc_MC_Aplanarity_stack_2->SetBinError(1,0.0575917);
   VbbHcc_MC_Aplanarity_stack_2->SetBinError(2,0.03983669);
   VbbHcc_MC_Aplanarity_stack_2->SetBinError(3,0.03103362);
   VbbHcc_MC_Aplanarity_stack_2->SetBinError(4,0.02509082);
   VbbHcc_MC_Aplanarity_stack_2->SetBinError(5,0.02051263);
   VbbHcc_MC_Aplanarity_stack_2->SetBinError(6,0.0169831);
   VbbHcc_MC_Aplanarity_stack_2->SetBinError(7,0.01427737);
   VbbHcc_MC_Aplanarity_stack_2->SetBinError(8,0.0117179);
   VbbHcc_MC_Aplanarity_stack_2->SetBinError(9,0.009585509);
   VbbHcc_MC_Aplanarity_stack_2->SetBinError(10,0.007788205);
   VbbHcc_MC_Aplanarity_stack_2->SetBinError(11,0.006603871);
   VbbHcc_MC_Aplanarity_stack_2->SetBinError(12,0.005271642);
   VbbHcc_MC_Aplanarity_stack_2->SetBinError(13,0.003933402);
   VbbHcc_MC_Aplanarity_stack_2->SetBinError(14,0.00256097);
   VbbHcc_MC_Aplanarity_stack_2->SetBinError(15,0.002105585);
   VbbHcc_MC_Aplanarity_stack_2->SetBinError(16,0.001924913);
   VbbHcc_MC_Aplanarity_stack_2->SetBinError(17,0.001522535);
   VbbHcc_MC_Aplanarity_stack_2->SetBinError(18,0.001160603);
   VbbHcc_MC_Aplanarity_stack_2->SetBinError(19,0.001092934);
   VbbHcc_MC_Aplanarity_stack_2->SetBinError(20,0.0005784392);
   VbbHcc_MC_Aplanarity_stack_2->SetEntries(54504);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_MC_Aplanarity_stack_2->SetFillColor(ci);
   VbbHcc_MC_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_MC_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_MC_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_MC_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_MC_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_MC_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_MC_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_MC_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_MC_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_MC_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_MC_Aplanarity_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_MC_Aplanarity_stack_1","ZHcc","F");

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
   Aplanarity_signal_16->Modified();
   Aplanarity_signal_16->cd();
   Aplanarity_signal_16->SetSelected(Aplanarity_signal_16);
}
