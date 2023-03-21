#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetpt_JEC_tags_16()
{
//=========Macro generated from canvas: Z_jetpt_JEC_tags_16/Z_jetpt_JEC_tags_16
//=========  (Mon Mar 20 11:48:31 2023) by ROOT version 6.26/06
   TCanvas *Z_jetpt_JEC_tags_16 = new TCanvas("Z_jetpt_JEC_tags_16", "Z_jetpt_JEC_tags_16",0,0,600,600);
   Z_jetpt_JEC_tags_16->SetHighLightColor(2);
   Z_jetpt_JEC_tags_16->Range(-65.50587,-0.4109528,351.4899,3.013654);
   Z_jetpt_JEC_tags_16->SetFillColor(0);
   Z_jetpt_JEC_tags_16->SetFillStyle(4000);
   Z_jetpt_JEC_tags_16->SetBorderMode(0);
   Z_jetpt_JEC_tags_16->SetBorderSize(2);
   Z_jetpt_JEC_tags_16->SetLeftMargin(0.15709);
   Z_jetpt_JEC_tags_16->SetRightMargin(0.1234783);
   Z_jetpt_JEC_tags_16->SetBottomMargin(0.12);
   Z_jetpt_JEC_tags_16->SetFrameFillStyle(1000);
   Z_jetpt_JEC_tags_16->SetFrameBorderMode(0);
   Z_jetpt_JEC_tags_16->SetFrameFillStyle(1000);
   Z_jetpt_JEC_tags_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(2.671193);
   
   TH1F *st_stack_85 = new TH1F("st_stack_85","",150,0,300);
   st_stack_85->SetMinimum(0);
   st_stack_85->SetMaximum(2.671193);
   st_stack_85->SetDirectory(0);
   st_stack_85->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_85->SetLineColor(ci);
   st_stack_85->GetXaxis()->SetTitle("b-jet p_{T} (w/ JEC) [GeV]");
   st_stack_85->GetXaxis()->SetRange(1,150);
   st_stack_85->GetXaxis()->SetLabelFont(42);
   st_stack_85->GetXaxis()->SetTitleOffset(1);
   st_stack_85->GetXaxis()->SetTitleFont(42);
   st_stack_85->GetYaxis()->SetTitle("Event/2.0 GeV");
   st_stack_85->GetYaxis()->SetLabelFont(42);
   st_stack_85->GetYaxis()->SetTitleSize(0.037);
   st_stack_85->GetYaxis()->SetTitleFont(42);
   st_stack_85->GetZaxis()->SetLabelFont(42);
   st_stack_85->GetZaxis()->SetTitleOffset(1);
   st_stack_85->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_85);
   
   
   TH1D *VbbHcc_tags_Z_jetpt_JEC_stack_1 = new TH1D("VbbHcc_tags_Z_jetpt_JEC_stack_1","",150,0,300);
   VbbHcc_tags_Z_jetpt_JEC_stack_1->SetBinContent(0,1.897061);
   VbbHcc_tags_Z_jetpt_JEC_stack_1->SetBinContent(1,0.02041269);
   VbbHcc_tags_Z_jetpt_JEC_stack_1->SetBinContent(2,1.565176);
   VbbHcc_tags_Z_jetpt_JEC_stack_1->SetBinContent(3,0.3464353);
   VbbHcc_tags_Z_jetpt_JEC_stack_1->SetBinError(0,0.07519665);
   VbbHcc_tags_Z_jetpt_JEC_stack_1->SetBinError(1,0.007737765);
   VbbHcc_tags_Z_jetpt_JEC_stack_1->SetBinError(2,0.06800783);
   VbbHcc_tags_Z_jetpt_JEC_stack_1->SetBinError(3,0.03226713);
   VbbHcc_tags_Z_jetpt_JEC_stack_1->SetEntries(1354);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_jetpt_JEC_stack_1->SetFillColor(ci);
   VbbHcc_tags_Z_jetpt_JEC_stack_1->GetXaxis()->SetRange(1,300);
   VbbHcc_tags_Z_jetpt_JEC_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetpt_JEC_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_jetpt_JEC_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetpt_JEC_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetpt_JEC_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetpt_JEC_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetpt_JEC_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_jetpt_JEC_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_jetpt_JEC_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_jetpt_JEC_stack_2 = new TH1D("VbbHcc_tags_Z_jetpt_JEC_stack_2","",150,0,300);
   VbbHcc_tags_Z_jetpt_JEC_stack_2->SetBinContent(0,0.8255673);
   VbbHcc_tags_Z_jetpt_JEC_stack_2->SetBinContent(1,0.0047402);
   VbbHcc_tags_Z_jetpt_JEC_stack_2->SetBinContent(2,0.6519147);
   VbbHcc_tags_Z_jetpt_JEC_stack_2->SetBinContent(3,0.1359019);
   VbbHcc_tags_Z_jetpt_JEC_stack_2->SetBinError(0,0.01774728);
   VbbHcc_tags_Z_jetpt_JEC_stack_2->SetBinError(1,0.001343904);
   VbbHcc_tags_Z_jetpt_JEC_stack_2->SetBinError(2,0.0157668);
   VbbHcc_tags_Z_jetpt_JEC_stack_2->SetBinError(3,0.007196665);
   VbbHcc_tags_Z_jetpt_JEC_stack_2->SetEntries(4322);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_jetpt_JEC_stack_2->SetFillColor(ci);
   VbbHcc_tags_Z_jetpt_JEC_stack_2->GetXaxis()->SetRange(1,300);
   VbbHcc_tags_Z_jetpt_JEC_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetpt_JEC_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_jetpt_JEC_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetpt_JEC_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetpt_JEC_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetpt_JEC_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetpt_JEC_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_jetpt_JEC_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_jetpt_JEC_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_jetpt_JEC_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_jetpt_JEC_stack_1","ZHcc","F");

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
   Z_jetpt_JEC_tags_16->Modified();
   Z_jetpt_JEC_tags_16->cd();
   Z_jetpt_JEC_tags_16->SetSelected(Z_jetpt_JEC_tags_16);
}
