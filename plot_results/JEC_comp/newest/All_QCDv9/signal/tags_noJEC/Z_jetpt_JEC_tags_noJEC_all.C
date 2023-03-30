void Z_jetpt_JEC_tags_noJEC_all()
{
//=========Macro generated from canvas: Z_jetpt_JEC_tags_noJEC_all/Z_jetpt_JEC_tags_noJEC_all
//=========  (Thu Mar 30 10:44:19 2023) by ROOT version 6.14/09
   TCanvas *Z_jetpt_JEC_tags_noJEC_all = new TCanvas("Z_jetpt_JEC_tags_noJEC_all", "Z_jetpt_JEC_tags_noJEC_all",0,0,600,600);
   Z_jetpt_JEC_tags_noJEC_all->SetHighLightColor(2);
   Z_jetpt_JEC_tags_noJEC_all->Range(-65.50587,-2.07045,351.4899,15.1833);
   Z_jetpt_JEC_tags_noJEC_all->SetFillColor(0);
   Z_jetpt_JEC_tags_noJEC_all->SetFillStyle(4000);
   Z_jetpt_JEC_tags_noJEC_all->SetBorderMode(0);
   Z_jetpt_JEC_tags_noJEC_all->SetBorderSize(2);
   Z_jetpt_JEC_tags_noJEC_all->SetLeftMargin(0.15709);
   Z_jetpt_JEC_tags_noJEC_all->SetRightMargin(0.1234783);
   Z_jetpt_JEC_tags_noJEC_all->SetBottomMargin(0.12);
   Z_jetpt_JEC_tags_noJEC_all->SetFrameFillStyle(1000);
   Z_jetpt_JEC_tags_noJEC_all->SetFrameBorderMode(0);
   Z_jetpt_JEC_tags_noJEC_all->SetFrameFillStyle(1000);
   Z_jetpt_JEC_tags_noJEC_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(12.81707);
   
   TH1F *st_stack_280 = new TH1F("st_stack_280","",150,0,300);
   st_stack_280->SetMinimum(0);
   st_stack_280->SetMaximum(13.45792);
   st_stack_280->SetDirectory(0);
   st_stack_280->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_280->SetLineColor(ci);
   st_stack_280->GetXaxis()->SetTitle("b-jet p_{T} (w/ JEC) [GeV]");
   st_stack_280->GetXaxis()->SetRange(1,150);
   st_stack_280->GetXaxis()->SetLabelFont(42);
   st_stack_280->GetXaxis()->SetLabelSize(0.035);
   st_stack_280->GetXaxis()->SetTitleSize(0.035);
   st_stack_280->GetXaxis()->SetTitleFont(42);
   st_stack_280->GetYaxis()->SetTitle("Event/2.0 GeV");
   st_stack_280->GetYaxis()->SetLabelFont(42);
   st_stack_280->GetYaxis()->SetLabelSize(0.035);
   st_stack_280->GetYaxis()->SetTitleSize(0.037);
   st_stack_280->GetYaxis()->SetTitleOffset(0);
   st_stack_280->GetYaxis()->SetTitleFont(42);
   st_stack_280->GetZaxis()->SetLabelFont(42);
   st_stack_280->GetZaxis()->SetLabelSize(0.035);
   st_stack_280->GetZaxis()->SetTitleSize(0.035);
   st_stack_280->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_280);
   
   
   TH1D *VbbHcc_tags_noJEC_Z_jetpt_JEC_all_stack_1 = new TH1D("VbbHcc_tags_noJEC_Z_jetpt_JEC_all_stack_1","",150,0,300);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_all_stack_1->SetBinContent(0,8.716925);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_all_stack_1->SetBinContent(1,0.06184512);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_all_stack_1->SetBinContent(2,7.509752);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_all_stack_1->SetBinContent(3,1.496724);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_all_stack_1->SetBinError(0,0.151384);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_all_stack_1->SetBinError(1,0.01227988);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_all_stack_1->SetBinError(2,0.1465204);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_all_stack_1->SetBinError(3,0.061533);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_all_stack_1->SetEntries(8003);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_noJEC_Z_jetpt_JEC_all_stack_1->SetFillColor(ci);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_all_stack_1->GetXaxis()->SetRange(1,300);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_noJEC_Z_jetpt_JEC_all_stack_1,"");
   
   TH1D *VbbHcc_tags_noJEC_Z_jetpt_JEC_all_stack_2 = new TH1D("VbbHcc_tags_noJEC_Z_jetpt_JEC_all_stack_2","",150,0,300);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_all_stack_2->SetBinContent(0,3.78882);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_all_stack_2->SetBinContent(1,0.01866464);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_all_stack_2->SetBinContent(2,3.128415);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_all_stack_2->SetBinContent(3,0.6595142);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_all_stack_2->SetBinError(0,0.0361249);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_all_stack_2->SetBinError(1,0.00245265);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_all_stack_2->SetBinError(2,0.03220439);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_all_stack_2->SetBinError(3,0.01478288);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_all_stack_2->SetEntries(25459);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_noJEC_Z_jetpt_JEC_all_stack_2->SetFillColor(ci);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_all_stack_2->GetXaxis()->SetRange(1,300);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_noJEC_Z_jetpt_JEC_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_noJEC_Z_jetpt_JEC_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_noJEC_Z_jetpt_JEC_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_noJEC_Z_jetpt_JEC_all_stack_1","ZHcc","F");

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
   Z_jetpt_JEC_tags_noJEC_all->Modified();
   Z_jetpt_JEC_tags_noJEC_all->cd();
   Z_jetpt_JEC_tags_noJEC_all->SetSelected(Z_jetpt_JEC_tags_noJEC_all);
}
