#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetpt_JEC_both_16()
{
//=========Macro generated from canvas: Z_jetpt_JEC_both_16/Z_jetpt_JEC_both_16
//=========  (Mon Mar 20 11:48:34 2023) by ROOT version 6.26/06
   TCanvas *Z_jetpt_JEC_both_16 = new TCanvas("Z_jetpt_JEC_both_16", "Z_jetpt_JEC_both_16",0,0,600,600);
   Z_jetpt_JEC_both_16->SetHighLightColor(2);
   Z_jetpt_JEC_both_16->Range(-65.50587,-0.4184009,351.4899,3.068273);
   Z_jetpt_JEC_both_16->SetFillColor(0);
   Z_jetpt_JEC_both_16->SetFillStyle(4000);
   Z_jetpt_JEC_both_16->SetBorderMode(0);
   Z_jetpt_JEC_both_16->SetBorderSize(2);
   Z_jetpt_JEC_both_16->SetLeftMargin(0.15709);
   Z_jetpt_JEC_both_16->SetRightMargin(0.1234783);
   Z_jetpt_JEC_both_16->SetBottomMargin(0.12);
   Z_jetpt_JEC_both_16->SetFrameFillStyle(1000);
   Z_jetpt_JEC_both_16->SetFrameBorderMode(0);
   Z_jetpt_JEC_both_16->SetFrameFillStyle(1000);
   Z_jetpt_JEC_both_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(2.719606);
   
   TH1F *st_stack_277 = new TH1F("st_stack_277","",150,0,300);
   st_stack_277->SetMinimum(0);
   st_stack_277->SetMaximum(2.719606);
   st_stack_277->SetDirectory(0);
   st_stack_277->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_277->SetLineColor(ci);
   st_stack_277->GetXaxis()->SetTitle("b-jet p_{T} (w/ JEC) [GeV]");
   st_stack_277->GetXaxis()->SetRange(1,150);
   st_stack_277->GetXaxis()->SetLabelFont(42);
   st_stack_277->GetXaxis()->SetTitleOffset(1);
   st_stack_277->GetXaxis()->SetTitleFont(42);
   st_stack_277->GetYaxis()->SetTitle("Event/2.0 GeV");
   st_stack_277->GetYaxis()->SetLabelFont(42);
   st_stack_277->GetYaxis()->SetTitleSize(0.037);
   st_stack_277->GetYaxis()->SetTitleFont(42);
   st_stack_277->GetZaxis()->SetLabelFont(42);
   st_stack_277->GetZaxis()->SetTitleOffset(1);
   st_stack_277->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_277);
   
   
   TH1D *VbbHcc_both_Z_jetpt_JEC_stack_1 = new TH1D("VbbHcc_both_Z_jetpt_JEC_stack_1","",150,0,300);
   VbbHcc_both_Z_jetpt_JEC_stack_1->SetBinContent(0,1.931994);
   VbbHcc_both_Z_jetpt_JEC_stack_1->SetBinContent(1,0.02041269);
   VbbHcc_both_Z_jetpt_JEC_stack_1->SetBinContent(2,1.59268);
   VbbHcc_both_Z_jetpt_JEC_stack_1->SetBinContent(3,0.3523816);
   VbbHcc_both_Z_jetpt_JEC_stack_1->SetBinError(0,0.07588176);
   VbbHcc_both_Z_jetpt_JEC_stack_1->SetBinError(1,0.007737765);
   VbbHcc_both_Z_jetpt_JEC_stack_1->SetBinError(2,0.06862465);
   VbbHcc_both_Z_jetpt_JEC_stack_1->SetBinError(3,0.03254064);
   VbbHcc_both_Z_jetpt_JEC_stack_1->SetEntries(1377);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_jetpt_JEC_stack_1->SetFillColor(ci);
   VbbHcc_both_Z_jetpt_JEC_stack_1->GetXaxis()->SetRange(1,300);
   VbbHcc_both_Z_jetpt_JEC_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetpt_JEC_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_jetpt_JEC_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetpt_JEC_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetpt_JEC_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetpt_JEC_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetpt_JEC_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_jetpt_JEC_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_jetpt_JEC_stack_1,"");
   
   TH1D *VbbHcc_both_Z_jetpt_JEC_stack_2 = new TH1D("VbbHcc_both_Z_jetpt_JEC_stack_2","",150,0,300);
   VbbHcc_both_Z_jetpt_JEC_stack_2->SetBinContent(0,0.8440984);
   VbbHcc_both_Z_jetpt_JEC_stack_2->SetBinContent(1,0.00509725);
   VbbHcc_both_Z_jetpt_JEC_stack_2->SetBinContent(2,0.6645927);
   VbbHcc_both_Z_jetpt_JEC_stack_2->SetBinContent(3,0.1374945);
   VbbHcc_both_Z_jetpt_JEC_stack_2->SetBinError(0,0.01794641);
   VbbHcc_both_Z_jetpt_JEC_stack_2->SetBinError(1,0.001390526);
   VbbHcc_both_Z_jetpt_JEC_stack_2->SetBinError(2,0.01591554);
   VbbHcc_both_Z_jetpt_JEC_stack_2->SetBinError(3,0.007240632);
   VbbHcc_both_Z_jetpt_JEC_stack_2->SetEntries(4411);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_jetpt_JEC_stack_2->SetFillColor(ci);
   VbbHcc_both_Z_jetpt_JEC_stack_2->GetXaxis()->SetRange(1,300);
   VbbHcc_both_Z_jetpt_JEC_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetpt_JEC_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_jetpt_JEC_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetpt_JEC_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetpt_JEC_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetpt_JEC_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetpt_JEC_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_jetpt_JEC_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_jetpt_JEC_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_jetpt_JEC_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_jetpt_JEC_stack_1","ZHcc","F");

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
   Z_jetpt_JEC_both_16->Modified();
   Z_jetpt_JEC_both_16->cd();
   Z_jetpt_JEC_both_16->SetSelected(Z_jetpt_JEC_both_16);
}
