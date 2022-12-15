void nC_medium_jets_all_17()
{
//=========Macro generated from canvas: nC_medium_jets_all_17/nC_medium_jets_all_17
//=========  (Thu Dec 15 10:04:54 2022) by ROOT version 6.14/09
   TCanvas *nC_medium_jets_all_17 = new TCanvas("nC_medium_jets_all_17", "nC_medium_jets_all_17",0,0,600,600);
   nC_medium_jets_all_17->SetHighLightColor(2);
   nC_medium_jets_all_17->Range(-2.683529,-70.14891,11.21633,514.4253);
   nC_medium_jets_all_17->SetFillColor(0);
   nC_medium_jets_all_17->SetFillStyle(4000);
   nC_medium_jets_all_17->SetBorderMode(0);
   nC_medium_jets_all_17->SetBorderSize(2);
   nC_medium_jets_all_17->SetLeftMargin(0.15709);
   nC_medium_jets_all_17->SetRightMargin(0.1234783);
   nC_medium_jets_all_17->SetBottomMargin(0.12);
   nC_medium_jets_all_17->SetFrameFillStyle(1000);
   nC_medium_jets_all_17->SetFrameBorderMode(0);
   nC_medium_jets_all_17->SetFrameFillStyle(1000);
   nC_medium_jets_all_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(434.2551);
   
   TH1F *st_stack_66 = new TH1F("st_stack_66","",10,-0.5,9.5);
   st_stack_66->SetMinimum(0);
   st_stack_66->SetMaximum(455.9679);
   st_stack_66->SetDirectory(0);
   st_stack_66->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_66->SetLineColor(ci);
   st_stack_66->GetXaxis()->SetTitle("c-jet multiplicity (medium WP)");
   st_stack_66->GetXaxis()->SetRange(1,10);
   st_stack_66->GetXaxis()->SetLabelFont(42);
   st_stack_66->GetXaxis()->SetLabelSize(0.035);
   st_stack_66->GetXaxis()->SetTitleSize(0.035);
   st_stack_66->GetXaxis()->SetTitleFont(42);
   st_stack_66->GetYaxis()->SetTitle("Events/1.0");
   st_stack_66->GetYaxis()->SetLabelFont(42);
   st_stack_66->GetYaxis()->SetLabelSize(0.035);
   st_stack_66->GetYaxis()->SetTitleSize(0.037);
   st_stack_66->GetYaxis()->SetTitleOffset(0);
   st_stack_66->GetYaxis()->SetTitleFont(42);
   st_stack_66->GetZaxis()->SetLabelFont(42);
   st_stack_66->GetZaxis()->SetLabelSize(0.035);
   st_stack_66->GetZaxis()->SetTitleSize(0.035);
   st_stack_66->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_66);
   
   
   TH1D *VbbHcc_jets_all_nC_medium_stack_1 = new TH1D("VbbHcc_jets_all_nC_medium_stack_1","",10,-0.5,9.5);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(1,109.2027);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(2,256.2407);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(3,229.3597);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(4,98.3884);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(5,22.48466);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(6,2.83314);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(7,0.2739634);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(8,0.03366742);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(9,0.003526396);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(1,0.4536101);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(2,0.6907456);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(3,0.6521302);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(4,0.4257561);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(5,0.2028809);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(6,0.07172576);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(7,0.02234533);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(8,0.007498505);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(9,0.002513684);
   VbbHcc_jets_all_nC_medium_stack_1->SetEntries(495304);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_all_nC_medium_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nC_medium_stack_1->SetLineColor(ci);
   VbbHcc_jets_all_nC_medium_stack_1->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nC_medium_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_nC_medium_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_nC_medium_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_nC_medium_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_nC_medium_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_all_nC_medium_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_nC_medium_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_nC_medium_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nC_medium_stack_1,"");
   
   TH1D *VbbHcc_jets_all_nC_medium_stack_2 = new TH1D("VbbHcc_jets_all_nC_medium_stack_2","",10,-0.5,9.5);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(1,11.71188);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(2,33.26275);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(3,34.09451);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(4,16.12862);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(5,3.839907);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(6,0.3767856);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(7,0.01097005);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(1,0.05350389);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(2,0.0900669);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(3,0.09109982);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(4,0.06254852);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(5,0.03051259);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(6,0.009554561);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(7,0.001604296);
   VbbHcc_jets_all_nC_medium_stack_2->SetEntries(465395);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_all_nC_medium_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nC_medium_stack_2->SetLineColor(ci);
   VbbHcc_jets_all_nC_medium_stack_2->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nC_medium_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_nC_medium_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_nC_medium_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_nC_medium_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_nC_medium_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_all_nC_medium_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_nC_medium_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_nC_medium_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nC_medium_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.62,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_nC_medium_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nC_medium_stack_1","ZHcc","F");

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
   nC_medium_jets_all_17->Modified();
   nC_medium_jets_all_17->cd();
   nC_medium_jets_all_17->SetSelected(nC_medium_jets_all_17);
}
