#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_both_all_logY()
{
//=========Macro generated from canvas: Aplanarity_both_all/Aplanarity_both_all
//=========  (Wed Jan 18 11:42:15 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_both_all = new TCanvas("Aplanarity_both_all", "Aplanarity_both_all",0,0,600,600);
   Aplanarity_both_all->SetHighLightColor(2);
   Aplanarity_both_all->Range(-0.2183529,0.2881089,1.171633,3.60508);
   Aplanarity_both_all->SetFillColor(0);
   Aplanarity_both_all->SetFillStyle(4000);
   Aplanarity_both_all->SetBorderMode(0);
   Aplanarity_both_all->SetBorderSize(2);
   Aplanarity_both_all->SetLogy();
   Aplanarity_both_all->SetLeftMargin(0.15709);
   Aplanarity_both_all->SetRightMargin(0.1234783);
   Aplanarity_both_all->SetBottomMargin(0.12);
   Aplanarity_both_all->SetFrameFillStyle(1000);
   Aplanarity_both_all->SetFrameBorderMode(0);
   Aplanarity_both_all->SetFrameFillStyle(1000);
   Aplanarity_both_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(1317.893);
   
   TH1F *st_stack_192 = new TH1F("st_stack_192","",50,0,1);
   st_stack_192->SetMinimum(4.85451);
   st_stack_192->SetMaximum(1876.647);
   st_stack_192->SetDirectory(0);
   st_stack_192->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_192->SetLineColor(ci);
   st_stack_192->GetXaxis()->SetTitle("Aplanarity");
   st_stack_192->GetXaxis()->SetRange(1,50);
   st_stack_192->GetXaxis()->SetLabelFont(42);
   st_stack_192->GetXaxis()->SetTitleOffset(1);
   st_stack_192->GetXaxis()->SetTitleFont(42);
   st_stack_192->GetYaxis()->SetTitle("Events/0.02");
   st_stack_192->GetYaxis()->SetLabelFont(42);
   st_stack_192->GetYaxis()->SetTitleSize(0.037);
   st_stack_192->GetYaxis()->SetTitleFont(42);
   st_stack_192->GetZaxis()->SetLabelFont(42);
   st_stack_192->GetZaxis()->SetTitleOffset(1);
   st_stack_192->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_192);
   
   
   TH1D *VbbHcc_both_Aplanarity_all_stack_1 = new TH1D("VbbHcc_both_Aplanarity_all_stack_1","",50,0,1);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(1,9.560923);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(2,6.906177);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(3,4.893326);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(4,3.394864);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(5,2.330922);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(6,1.827673);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(7,1.322362);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(8,0.9571461);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(9,0.6816705);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(10,0.489712);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(11,0.4111942);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(12,0.2623897);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(13,0.2055532);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(14,0.1172097);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(15,0.0931831);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(16,0.05122399);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(17,0.02762444);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(18,0.01872028);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(19,0.00665922);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(20,0.01538954);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(21,0.002636796);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(1,0.1423454);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(2,0.1217334);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(3,0.1030434);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(4,0.08508601);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(5,0.07030178);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(6,0.06173879);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(7,0.05354829);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(8,0.04539253);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(9,0.03821063);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(10,0.03306703);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(11,0.02931436);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(12,0.02396193);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(13,0.0214336);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(14,0.01585366);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(15,0.01476323);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(16,0.01064537);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(17,0.007497487);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(18,0.006148471);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(19,0.003171742);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(20,0.005754615);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(21,0.002636796);
   VbbHcc_both_Aplanarity_all_stack_1->SetEntries(19568);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Aplanarity_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_all_stack_1->SetLineColor(ci);
   VbbHcc_both_Aplanarity_all_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_all_stack_1,"");
   
   TH1D *VbbHcc_both_Aplanarity_all_stack_2 = new TH1D("VbbHcc_both_Aplanarity_all_stack_2","",50,0,1);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(1,3.618002);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(2,2.381414);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(3,1.576334);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(4,1.037969);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(5,0.7067367);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(6,0.4965998);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(7,0.3464556);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(8,0.2389338);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(9,0.1496963);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(10,0.09489093);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(11,0.06217764);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(12,0.05081562);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(13,0.03260943);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(14,0.02050041);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(15,0.01406589);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(16,0.00830771);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(17,0.00322655);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(18,0.002098333);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(19,0.001099933);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(20,0.00132159);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(22,8.976682e-05);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(1,0.03238138);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(2,0.02640066);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(3,0.02143949);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(4,0.01748643);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(5,0.01444396);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(6,0.0120669);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(7,0.01011624);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(8,0.008382296);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(9,0.006571955);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(10,0.005209936);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(11,0.004257254);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(12,0.003898581);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(13,0.003037494);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(14,0.00234451);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(15,0.001994227);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(16,0.001565256);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(17,0.0009499739);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(18,0.0008294376);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(19,0.000577435);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(20,0.0006073557);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(22,8.976682e-05);
   VbbHcc_both_Aplanarity_all_stack_2->SetEntries(45428);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Aplanarity_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_all_stack_2->SetLineColor(ci);
   VbbHcc_both_Aplanarity_all_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Aplanarity_all_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_all_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
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
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_both_all->Modified();
   Aplanarity_both_all->cd();
   Aplanarity_both_all->SetSelected(Aplanarity_both_all);
}
