#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nB_medium_jets_bckg_16_logY()
{
//=========Macro generated from canvas: nB_medium_jets_bckg_16/nB_medium_jets_bckg_16
//=========  (Fri Mar 10 14:09:13 2023) by ROOT version 6.26/06
   TCanvas *nB_medium_jets_bckg_16 = new TCanvas("nB_medium_jets_bckg_16", "nB_medium_jets_bckg_16",0,0,600,600);
   nB_medium_jets_bckg_16->SetHighLightColor(2);
   nB_medium_jets_bckg_16->Range(-2.683529,-1.733919,11.21633,14.2379);
   nB_medium_jets_bckg_16->SetFillColor(0);
   nB_medium_jets_bckg_16->SetFillStyle(4000);
   nB_medium_jets_bckg_16->SetBorderMode(0);
   nB_medium_jets_bckg_16->SetBorderSize(2);
   nB_medium_jets_bckg_16->SetLogy();
   nB_medium_jets_bckg_16->SetLeftMargin(0.15709);
   nB_medium_jets_bckg_16->SetRightMargin(0.1234783);
   nB_medium_jets_bckg_16->SetBottomMargin(0.12);
   nB_medium_jets_bckg_16->SetFrameFillStyle(1000);
   nB_medium_jets_bckg_16->SetFrameBorderMode(0);
   nB_medium_jets_bckg_16->SetFrameFillStyle(1000);
   nB_medium_jets_bckg_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(1.355184e+12);
   
   TH1F *st_stack_26 = new TH1F("st_stack_26","",10,-0.5,9.5);
   st_stack_26->SetMinimum(1.522997);
   st_stack_26->SetMaximum(4.372365e+12);
   st_stack_26->SetDirectory(0);
   st_stack_26->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_26->SetLineColor(ci);
   st_stack_26->GetXaxis()->SetTitle("b-jet multiplicity (medium WP)");
   st_stack_26->GetXaxis()->SetRange(1,10);
   st_stack_26->GetXaxis()->SetLabelFont(42);
   st_stack_26->GetXaxis()->SetTitleOffset(1);
   st_stack_26->GetXaxis()->SetTitleFont(42);
   st_stack_26->GetYaxis()->SetTitle("Event/1.0");
   st_stack_26->GetYaxis()->SetLabelFont(42);
   st_stack_26->GetYaxis()->SetTitleSize(0.037);
   st_stack_26->GetYaxis()->SetTitleFont(42);
   st_stack_26->GetZaxis()->SetLabelFont(42);
   st_stack_26->GetZaxis()->SetTitleOffset(1);
   st_stack_26->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_26);
   
   
   TH1D *VbbHcc_jets_nB_medium_stack_1 = new TH1D("VbbHcc_jets_nB_medium_stack_1","",10,-0.5,9.5);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(1,1.124794e+12);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(2,2.674041e+10);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(3,1.034193e+09);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(4,1.115544e+07);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(5,236943.3);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(6,3372.581);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(7,87.50736);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(8,9.675847);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(1,1.534785e+08);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(2,2.183985e+07);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(3,3731938);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(4,196270.5);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(5,10321.1);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(6,674.3688);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(7,37.74411);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(8,8.959209);
   VbbHcc_jets_nB_medium_stack_1->SetEntries(2.416594e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_nB_medium_stack_1->SetFillColor(ci);
   VbbHcc_jets_nB_medium_stack_1->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nB_medium_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nB_medium_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nB_medium_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nB_medium_stack_1,"");
   
   TH1D *VbbHcc_jets_nB_medium_stack_2 = new TH1D("VbbHcc_jets_nB_medium_stack_2","",10,-0.5,9.5);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(1,8533160);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(2,1.416044e+07);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(3,6706473);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(4,449312.7);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(5,17082.68);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(6,595.142);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(7,22.30328);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(8,0.9085999);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(1,722.5132);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(2,936.288);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(3,648.3068);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(4,172.5833);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(5,33.98354);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(6,6.357113);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(7,1.239827);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(8,0.2524469);
   VbbHcc_jets_nB_medium_stack_2->SetEntries(5.194289e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_nB_medium_stack_2->SetFillColor(ci);
   VbbHcc_jets_nB_medium_stack_2->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nB_medium_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nB_medium_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nB_medium_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nB_medium_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_nB_medium_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_jets_nB_medium_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
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
   nB_medium_jets_bckg_16->Modified();
   nB_medium_jets_bckg_16->cd();
   nB_medium_jets_bckg_16->SetSelected(nB_medium_jets_bckg_16);
}
