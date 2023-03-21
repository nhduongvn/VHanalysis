#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_both_all_logY()
{
//=========Macro generated from canvas: Sphericity_both_all/Sphericity_both_all
//=========  (Mon Mar 20 11:49:49 2023) by ROOT version 6.26/06
   TCanvas *Sphericity_both_all = new TCanvas("Sphericity_both_all", "Sphericity_both_all",0,0,600,600);
   Sphericity_both_all->SetHighLightColor(2);
   Sphericity_both_all->Range(-0.2183529,-0.3651817,1.171633,1.225223);
   Sphericity_both_all->SetFillColor(0);
   Sphericity_both_all->SetFillStyle(4000);
   Sphericity_both_all->SetBorderMode(0);
   Sphericity_both_all->SetBorderSize(2);
   Sphericity_both_all->SetLogy();
   Sphericity_both_all->SetLeftMargin(0.15709);
   Sphericity_both_all->SetRightMargin(0.1234783);
   Sphericity_both_all->SetBottomMargin(0.12);
   Sphericity_both_all->SetFrameFillStyle(1000);
   Sphericity_both_all->SetFrameBorderMode(0);
   Sphericity_both_all->SetFrameFillStyle(1000);
   Sphericity_both_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(9.724778);
   
   TH1F *st_stack_252 = new TH1F("st_stack_252","",25,0,1);
   st_stack_252->SetMinimum(0.669371);
   st_stack_252->SetMaximum(11.64616);
   st_stack_252->SetDirectory(0);
   st_stack_252->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_252->SetLineColor(ci);
   st_stack_252->GetXaxis()->SetTitle("Sphericity");
   st_stack_252->GetXaxis()->SetRange(1,25);
   st_stack_252->GetXaxis()->SetLabelFont(42);
   st_stack_252->GetXaxis()->SetTitleOffset(1);
   st_stack_252->GetXaxis()->SetTitleFont(42);
   st_stack_252->GetYaxis()->SetTitle("Event/0.04");
   st_stack_252->GetYaxis()->SetLabelFont(42);
   st_stack_252->GetYaxis()->SetTitleSize(0.037);
   st_stack_252->GetYaxis()->SetTitleFont(42);
   st_stack_252->GetZaxis()->SetLabelFont(42);
   st_stack_252->GetZaxis()->SetTitleOffset(1);
   st_stack_252->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_252);
   
   
   TH1D *VbbHcc_both_Sphericity_all_stack_1 = new TH1D("VbbHcc_both_Sphericity_all_stack_1","",25,0,1);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(1,5.557435);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(2,5.26154);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(3,3.051732);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(4,1.875367);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(5,1.233516);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(6,0.5471292);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(7,0.2383482);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(8,0.101266);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(9,0.07872779);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(10,0.0501652);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(11,0.03651143);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(12,0.02699603);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(13,0.01335824);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(14,0.0191107);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(15,0.01324617);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(16,0.007227035);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(17,0.006998488);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(18,0.007910893);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(1,0.121763);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(2,0.1180435);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(3,0.09008233);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(4,0.06891812);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(5,0.06809621);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(6,0.03760649);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(7,0.0248294);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(8,0.01574066);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(9,0.01399104);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(10,0.01104606);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(11,0.008890529);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(12,0.007985108);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(13,0.005603007);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(14,0.006550263);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(15,0.005267187);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(16,0.004319944);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(17,0.004115665);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(18,0.004584965);
   VbbHcc_both_Sphericity_all_stack_1->SetEntries(8153);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Sphericity_all_stack_1->SetFillColor(ci);
   VbbHcc_both_Sphericity_all_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_all_stack_1,"");
   
   TH1D *VbbHcc_both_Sphericity_all_stack_2 = new TH1D("VbbHcc_both_Sphericity_all_stack_2","",25,0,1);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(1,2.51413);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(2,2.273942);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(3,1.19902);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(4,0.7722123);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(5,0.4275551);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(6,0.2379635);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(7,0.1160095);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(8,0.06775621);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(9,0.04398265);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(10,0.02776992);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(11,0.02132426);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(12,0.01649468);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(13,0.01198153);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(14,0.01125134);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(15,0.01044503);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(16,0.006182268);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(17,0.003729402);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(18,0.00287602);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(19,0.002118316);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(20,0.0007924108);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(1,0.02859425);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(2,0.02825563);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(3,0.01973686);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(4,0.01587864);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(5,0.01261755);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(6,0.008999364);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(7,0.006213693);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(8,0.005750343);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(9,0.003762247);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(10,0.002938702);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(11,0.002637412);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(12,0.002344987);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(13,0.001972592);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(14,0.001902252);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(15,0.001850643);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(16,0.001451629);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(17,0.001101809);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(18,0.0009956074);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(19,0.0008183244);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(20,0.0004694306);
   VbbHcc_both_Sphericity_all_stack_2->SetEntries(26049);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Sphericity_all_stack_2->SetFillColor(ci);
   VbbHcc_both_Sphericity_all_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Sphericity_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_all_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_both_all->Modified();
   Sphericity_both_all->cd();
   Sphericity_both_all->SetSelected(Sphericity_both_all);
}
