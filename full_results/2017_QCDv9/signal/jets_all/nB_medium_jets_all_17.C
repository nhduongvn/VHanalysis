void nB_medium_jets_all_17()
{
//=========Macro generated from canvas: nB_medium_jets_all_17/nB_medium_jets_all_17
//=========  (Thu Dec 15 10:04:54 2022) by ROOT version 6.14/09
   TCanvas *nB_medium_jets_all_17 = new TCanvas("nB_medium_jets_all_17", "nB_medium_jets_all_17",0,0,600,600);
   nB_medium_jets_all_17->SetHighLightColor(2);
   nB_medium_jets_all_17->Range(-2.683529,-94.28288,11.21633,691.4078);
   nB_medium_jets_all_17->SetFillColor(0);
   nB_medium_jets_all_17->SetFillStyle(4000);
   nB_medium_jets_all_17->SetBorderMode(0);
   nB_medium_jets_all_17->SetBorderSize(2);
   nB_medium_jets_all_17->SetLeftMargin(0.15709);
   nB_medium_jets_all_17->SetRightMargin(0.1234783);
   nB_medium_jets_all_17->SetBottomMargin(0.12);
   nB_medium_jets_all_17->SetFrameFillStyle(1000);
   nB_medium_jets_all_17->SetFrameBorderMode(0);
   nB_medium_jets_all_17->SetFrameFillStyle(1000);
   nB_medium_jets_all_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(583.6559);
   
   TH1F *st_stack_62 = new TH1F("st_stack_62","",10,-0.5,9.5);
   st_stack_62->SetMinimum(0);
   st_stack_62->SetMaximum(612.8387);
   st_stack_62->SetDirectory(0);
   st_stack_62->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_62->SetLineColor(ci);
   st_stack_62->GetXaxis()->SetTitle("b-jet multiplicity (medium WP)");
   st_stack_62->GetXaxis()->SetRange(1,10);
   st_stack_62->GetXaxis()->SetLabelFont(42);
   st_stack_62->GetXaxis()->SetLabelSize(0.035);
   st_stack_62->GetXaxis()->SetTitleSize(0.035);
   st_stack_62->GetXaxis()->SetTitleFont(42);
   st_stack_62->GetYaxis()->SetTitle("Events/1.0");
   st_stack_62->GetYaxis()->SetLabelFont(42);
   st_stack_62->GetYaxis()->SetLabelSize(0.035);
   st_stack_62->GetYaxis()->SetTitleSize(0.037);
   st_stack_62->GetYaxis()->SetTitleOffset(0);
   st_stack_62->GetYaxis()->SetTitleFont(42);
   st_stack_62->GetZaxis()->SetLabelFont(42);
   st_stack_62->GetZaxis()->SetLabelSize(0.035);
   st_stack_62->GetZaxis()->SetTitleSize(0.035);
   st_stack_62->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_62);
   
   
   TH1D *VbbHcc_jets_all_nB_medium_stack_1 = new TH1D("VbbHcc_jets_all_nB_medium_stack_1","",10,-0.5,9.5);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(1,345.7462);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(2,236.2975);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(3,102.7588);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(4,29.10677);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(5,4.430873);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(6,0.4432221);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(7,0.03494691);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(8,0.002089168);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(1,0.8036088);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(2,0.6622703);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(3,0.4353244);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(4,0.231128);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(5,0.08994934);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(6,0.02882063);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(7,0.007636144);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(8,0.002089168);
   VbbHcc_jets_all_nB_medium_stack_1->SetEntries(495304);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_all_nB_medium_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nB_medium_stack_1->SetLineColor(ci);
   VbbHcc_jets_all_nB_medium_stack_1->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nB_medium_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_nB_medium_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_nB_medium_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_nB_medium_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_nB_medium_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_all_nB_medium_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_nB_medium_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_nB_medium_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nB_medium_stack_1,"");
   
   TH1D *VbbHcc_jets_all_nB_medium_stack_2 = new TH1D("VbbHcc_jets_all_nB_medium_stack_2","",10,-0.5,9.5);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(1,43.35777);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(2,32.59001);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(3,16.97742);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(4,5.41172);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(5,0.9742296);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(6,0.105126);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(7,0.008169258);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(8,0.0009807227);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(1,0.1027049);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(2,0.08907733);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(3,0.06434963);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(4,0.03633491);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(5,0.01547332);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(6,0.005043252);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(7,0.001368984);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(8,0.0004443019);
   VbbHcc_jets_all_nB_medium_stack_2->SetEntries(465395);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_all_nB_medium_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nB_medium_stack_2->SetLineColor(ci);
   VbbHcc_jets_all_nB_medium_stack_2->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nB_medium_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_nB_medium_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_nB_medium_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_nB_medium_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_nB_medium_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_all_nB_medium_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_nB_medium_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_nB_medium_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nB_medium_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.62,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_nB_medium_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nB_medium_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nB_medium_jets_all_17->Modified();
   nB_medium_jets_all_17->cd();
   nB_medium_jets_all_17->SetSelected(nB_medium_jets_all_17);
}
