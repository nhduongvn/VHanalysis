#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nB_medium_jets_all_bckg_16_logY()
{
//=========Macro generated from canvas: nB_medium_jets_all_bckg_16/nB_medium_jets_all_bckg_16
//=========  (Thu Mar  9 13:30:14 2023) by ROOT version 6.26/06
   TCanvas *nB_medium_jets_all_bckg_16 = new TCanvas("nB_medium_jets_all_bckg_16", "nB_medium_jets_all_bckg_16",0,0,600,600);
   nB_medium_jets_all_bckg_16->SetHighLightColor(2);
   nB_medium_jets_all_bckg_16->Range(-2.683529,-1.726353,11.21633,14.19306);
   nB_medium_jets_all_bckg_16->SetFillColor(0);
   nB_medium_jets_all_bckg_16->SetFillStyle(4000);
   nB_medium_jets_all_bckg_16->SetBorderMode(0);
   nB_medium_jets_all_bckg_16->SetBorderSize(2);
   nB_medium_jets_all_bckg_16->SetLogy();
   nB_medium_jets_all_bckg_16->SetLeftMargin(0.15709);
   nB_medium_jets_all_bckg_16->SetRightMargin(0.1234783);
   nB_medium_jets_all_bckg_16->SetBottomMargin(0.12);
   nB_medium_jets_all_bckg_16->SetFrameFillStyle(1000);
   nB_medium_jets_all_bckg_16->SetFrameBorderMode(0);
   nB_medium_jets_all_bckg_16->SetFrameFillStyle(1000);
   nB_medium_jets_all_bckg_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(1.240041e+12);
   
   TH1F *st_stack_182 = new TH1F("st_stack_182","",10,-0.5,9.5);
   st_stack_182->SetMinimum(1.527483);
   st_stack_182->SetMaximum(3.991303e+12);
   st_stack_182->SetDirectory(0);
   st_stack_182->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_182->SetLineColor(ci);
   st_stack_182->GetXaxis()->SetTitle("b-jet multiplicity (medium WP)");
   st_stack_182->GetXaxis()->SetRange(1,10);
   st_stack_182->GetXaxis()->SetLabelFont(42);
   st_stack_182->GetXaxis()->SetTitleOffset(1);
   st_stack_182->GetXaxis()->SetTitleFont(42);
   st_stack_182->GetYaxis()->SetTitle("Event/1.0");
   st_stack_182->GetYaxis()->SetLabelFont(42);
   st_stack_182->GetYaxis()->SetTitleSize(0.037);
   st_stack_182->GetYaxis()->SetTitleFont(42);
   st_stack_182->GetZaxis()->SetLabelFont(42);
   st_stack_182->GetZaxis()->SetTitleOffset(1);
   st_stack_182->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_182);
   
   
   TH1D *VbbHcc_jets_all_nB_medium_stack_1 = new TH1D("VbbHcc_jets_all_nB_medium_stack_1","",10,-0.5,9.5);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(1,1.02923e+12);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(2,1.109461e+11);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(3,1.178598e+10);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(4,5.934573e+08);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(5,2.57294e+07);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(6,726056.4);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(7,15042.45);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(8,109.5423);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(1,1.465234e+08);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(2,4.746125e+07);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(3,1.507504e+07);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(4,3245391);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(5,626211.4);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(6,88386.45);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(7,3134.633);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(8,41.35465);
   VbbHcc_jets_all_nB_medium_stack_1->SetEntries(2.425785e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_all_nB_medium_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nB_medium_stack_1->SetLineColor(ci);
   VbbHcc_jets_all_nB_medium_stack_1->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nB_medium_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nB_medium_stack_1,"");
   
   TH1D *VbbHcc_jets_all_nB_medium_stack_2 = new TH1D("VbbHcc_jets_all_nB_medium_stack_2","",10,-0.5,9.5);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(1,3281891);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(2,1.191106e+07);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(3,1.21574e+07);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(4,2278264);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(5,220149.8);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(6,15956.83);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(7,1042.742);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(8,68.94088);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(9,7.228572);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(10,0.4599275);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(11,0.2223686);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(1,450.0428);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(2,861.002);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(3,873.4911);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(4,382.2195);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(5,119.6586);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(6,32.34717);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(7,8.317855);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(8,2.166089);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(9,0.7021333);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(10,0.1763566);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(11,0.1284183);
   VbbHcc_jets_all_nB_medium_stack_2->SetEntries(5.166267e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_all_nB_medium_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nB_medium_stack_2->SetLineColor(ci);
   VbbHcc_jets_all_nB_medium_stack_2->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nB_medium_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nB_medium_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_nB_medium_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
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
   entry=leg->AddEntry("VbbHcc_jets_all_nB_medium_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   nB_medium_jets_all_bckg_16->Modified();
   nB_medium_jets_all_bckg_16->cd();
   nB_medium_jets_all_bckg_16->SetSelected(nB_medium_jets_all_bckg_16);
}
