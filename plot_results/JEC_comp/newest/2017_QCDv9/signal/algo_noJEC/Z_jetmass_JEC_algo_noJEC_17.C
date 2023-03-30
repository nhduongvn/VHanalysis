void Z_jetmass_JEC_algo_noJEC_17()
{
//=========Macro generated from canvas: Z_jetmass_JEC_algo_noJEC_17/Z_jetmass_JEC_algo_noJEC_17
//=========  (Thu Mar 30 10:44:38 2023) by ROOT version 6.14/09
   TCanvas *Z_jetmass_JEC_algo_noJEC_17 = new TCanvas("Z_jetmass_JEC_algo_noJEC_17", "Z_jetmass_JEC_algo_noJEC_17",0,0,600,600);
   Z_jetmass_JEC_algo_noJEC_17->SetHighLightColor(2);
   Z_jetmass_JEC_algo_noJEC_17->Range(-65.50587,-0.2892358,351.4899,2.121063);
   Z_jetmass_JEC_algo_noJEC_17->SetFillColor(0);
   Z_jetmass_JEC_algo_noJEC_17->SetFillStyle(4000);
   Z_jetmass_JEC_algo_noJEC_17->SetBorderMode(0);
   Z_jetmass_JEC_algo_noJEC_17->SetBorderSize(2);
   Z_jetmass_JEC_algo_noJEC_17->SetLeftMargin(0.15709);
   Z_jetmass_JEC_algo_noJEC_17->SetRightMargin(0.1234783);
   Z_jetmass_JEC_algo_noJEC_17->SetBottomMargin(0.12);
   Z_jetmass_JEC_algo_noJEC_17->SetFrameFillStyle(1000);
   Z_jetmass_JEC_algo_noJEC_17->SetFrameBorderMode(0);
   Z_jetmass_JEC_algo_noJEC_17->SetFrameFillStyle(1000);
   Z_jetmass_JEC_algo_noJEC_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.790507);
   
   TH1F *st_stack_574 = new TH1F("st_stack_574","",150,0,300);
   st_stack_574->SetMinimum(0);
   st_stack_574->SetMaximum(1.880033);
   st_stack_574->SetDirectory(0);
   st_stack_574->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_574->SetLineColor(ci);
   st_stack_574->GetXaxis()->SetTitle("b-jet mass (w/ JEC) [GeV]");
   st_stack_574->GetXaxis()->SetRange(1,150);
   st_stack_574->GetXaxis()->SetLabelFont(42);
   st_stack_574->GetXaxis()->SetLabelSize(0.035);
   st_stack_574->GetXaxis()->SetTitleSize(0.035);
   st_stack_574->GetXaxis()->SetTitleFont(42);
   st_stack_574->GetYaxis()->SetTitle("Event/2.0 GeV");
   st_stack_574->GetYaxis()->SetLabelFont(42);
   st_stack_574->GetYaxis()->SetLabelSize(0.035);
   st_stack_574->GetYaxis()->SetTitleSize(0.037);
   st_stack_574->GetYaxis()->SetTitleOffset(0);
   st_stack_574->GetYaxis()->SetTitleFont(42);
   st_stack_574->GetZaxis()->SetLabelFont(42);
   st_stack_574->GetZaxis()->SetLabelSize(0.035);
   st_stack_574->GetZaxis()->SetTitleSize(0.035);
   st_stack_574->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_574);
   
   
   TH1D *VbbHcc_algo_noJEC_Z_jetmass_JEC_stack_1 = new TH1D("VbbHcc_algo_noJEC_Z_jetmass_JEC_stack_1","",150,0,300);
   VbbHcc_algo_noJEC_Z_jetmass_JEC_stack_1->SetBinContent(2,1.119876);
   VbbHcc_algo_noJEC_Z_jetmass_JEC_stack_1->SetBinContent(3,0.4249394);
   VbbHcc_algo_noJEC_Z_jetmass_JEC_stack_1->SetBinError(2,0.04624645);
   VbbHcc_algo_noJEC_Z_jetmass_JEC_stack_1->SetBinError(3,0.02845611);
   VbbHcc_algo_noJEC_Z_jetmass_JEC_stack_1->SetEntries(919);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_noJEC_Z_jetmass_JEC_stack_1->SetFillColor(ci);
   VbbHcc_algo_noJEC_Z_jetmass_JEC_stack_1->GetXaxis()->SetRange(1,300);
   VbbHcc_algo_noJEC_Z_jetmass_JEC_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_noJEC_Z_jetmass_JEC_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_noJEC_Z_jetmass_JEC_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_noJEC_Z_jetmass_JEC_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_noJEC_Z_jetmass_JEC_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_noJEC_Z_jetmass_JEC_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_noJEC_Z_jetmass_JEC_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_noJEC_Z_jetmass_JEC_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_noJEC_Z_jetmass_JEC_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_noJEC_Z_jetmass_JEC_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_noJEC_Z_jetmass_JEC_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_noJEC_Z_jetmass_JEC_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_noJEC_Z_jetmass_JEC_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_noJEC_Z_jetmass_JEC_stack_1,"");
   
   TH1D *VbbHcc_algo_noJEC_Z_jetmass_JEC_stack_2 = new TH1D("VbbHcc_algo_noJEC_Z_jetmass_JEC_stack_2","",150,0,300);
   VbbHcc_algo_noJEC_Z_jetmass_JEC_stack_2->SetBinContent(2,0.3662455);
   VbbHcc_algo_noJEC_Z_jetmass_JEC_stack_2->SetBinContent(3,0.1911838);
   VbbHcc_algo_noJEC_Z_jetmass_JEC_stack_2->SetBinError(2,0.009394608);
   VbbHcc_algo_noJEC_Z_jetmass_JEC_stack_2->SetBinError(3,0.006802002);
   VbbHcc_algo_noJEC_Z_jetmass_JEC_stack_2->SetEntries(2405);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_noJEC_Z_jetmass_JEC_stack_2->SetFillColor(ci);
   VbbHcc_algo_noJEC_Z_jetmass_JEC_stack_2->GetXaxis()->SetRange(1,300);
   VbbHcc_algo_noJEC_Z_jetmass_JEC_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_noJEC_Z_jetmass_JEC_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_noJEC_Z_jetmass_JEC_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_noJEC_Z_jetmass_JEC_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_noJEC_Z_jetmass_JEC_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_noJEC_Z_jetmass_JEC_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_noJEC_Z_jetmass_JEC_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_noJEC_Z_jetmass_JEC_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_noJEC_Z_jetmass_JEC_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_noJEC_Z_jetmass_JEC_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_noJEC_Z_jetmass_JEC_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_noJEC_Z_jetmass_JEC_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_noJEC_Z_jetmass_JEC_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_noJEC_Z_jetmass_JEC_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_noJEC_Z_jetmass_JEC_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_noJEC_Z_jetmass_JEC_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_JEC_algo_noJEC_17->Modified();
   Z_jetmass_JEC_algo_noJEC_17->cd();
   Z_jetmass_JEC_algo_noJEC_17->SetSelected(Z_jetmass_JEC_algo_noJEC_17);
}
