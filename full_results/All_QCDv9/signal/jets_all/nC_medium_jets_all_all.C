void nC_medium_jets_all_all()
{
//=========Macro generated from canvas: nC_medium_jets_all_all/nC_medium_jets_all_all
//=========  (Thu Dec 15 10:04:54 2022) by ROOT version 6.14/09
   TCanvas *nC_medium_jets_all_all = new TCanvas("nC_medium_jets_all_all", "nC_medium_jets_all_all",0,0,600,600);
   nC_medium_jets_all_all->SetHighLightColor(2);
   nC_medium_jets_all_all->Range(-2.683529,-228.6457,11.21633,1676.735);
   nC_medium_jets_all_all->SetFillColor(0);
   nC_medium_jets_all_all->SetFillStyle(4000);
   nC_medium_jets_all_all->SetBorderMode(0);
   nC_medium_jets_all_all->SetBorderSize(2);
   nC_medium_jets_all_all->SetLeftMargin(0.15709);
   nC_medium_jets_all_all->SetRightMargin(0.1234783);
   nC_medium_jets_all_all->SetBottomMargin(0.12);
   nC_medium_jets_all_all->SetFrameFillStyle(1000);
   nC_medium_jets_all_all->SetFrameBorderMode(0);
   nC_medium_jets_all_all->SetFrameFillStyle(1000);
   nC_medium_jets_all_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1415.426);
   
   TH1F *st_stack_68 = new TH1F("st_stack_68","",10,-0.5,9.5);
   st_stack_68->SetMinimum(0);
   st_stack_68->SetMaximum(1486.197);
   st_stack_68->SetDirectory(0);
   st_stack_68->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_68->SetLineColor(ci);
   st_stack_68->GetXaxis()->SetTitle("c-jet multiplicity (medium WP)");
   st_stack_68->GetXaxis()->SetRange(1,10);
   st_stack_68->GetXaxis()->SetLabelFont(42);
   st_stack_68->GetXaxis()->SetLabelSize(0.035);
   st_stack_68->GetXaxis()->SetTitleSize(0.035);
   st_stack_68->GetXaxis()->SetTitleFont(42);
   st_stack_68->GetYaxis()->SetTitle("Events/1.0");
   st_stack_68->GetYaxis()->SetLabelFont(42);
   st_stack_68->GetYaxis()->SetLabelSize(0.035);
   st_stack_68->GetYaxis()->SetTitleSize(0.037);
   st_stack_68->GetYaxis()->SetTitleOffset(0);
   st_stack_68->GetYaxis()->SetTitleFont(42);
   st_stack_68->GetZaxis()->SetLabelFont(42);
   st_stack_68->GetZaxis()->SetLabelSize(0.035);
   st_stack_68->GetZaxis()->SetTitleSize(0.035);
   st_stack_68->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_68);
   
   
   TH1D *VbbHcc_jets_all_nC_medium_all_stack_1 = new TH1D("VbbHcc_jets_all_nC_medium_all_stack_1","",10,-0.5,9.5);
   VbbHcc_jets_all_nC_medium_all_stack_1->SetBinContent(1,364.4794);
   VbbHcc_jets_all_nC_medium_all_stack_1->SetBinContent(2,836.5744);
   VbbHcc_jets_all_nC_medium_all_stack_1->SetBinContent(3,762.2827);
   VbbHcc_jets_all_nC_medium_all_stack_1->SetBinContent(4,347.3019);
   VbbHcc_jets_all_nC_medium_all_stack_1->SetBinContent(5,86.70247);
   VbbHcc_jets_all_nC_medium_all_stack_1->SetBinContent(6,11.99921);
   VbbHcc_jets_all_nC_medium_all_stack_1->SetBinContent(7,0.9326624);
   VbbHcc_jets_all_nC_medium_all_stack_1->SetBinContent(8,0.07000009);
   VbbHcc_jets_all_nC_medium_all_stack_1->SetBinContent(9,0.003526396);
   VbbHcc_jets_all_nC_medium_all_stack_1->SetBinError(1,0.8930243);
   VbbHcc_jets_all_nC_medium_all_stack_1->SetBinError(2,1.351917);
   VbbHcc_jets_all_nC_medium_all_stack_1->SetBinError(3,1.295196);
   VbbHcc_jets_all_nC_medium_all_stack_1->SetBinError(4,0.8755973);
   VbbHcc_jets_all_nC_medium_all_stack_1->SetBinError(5,0.4397968);
   VbbHcc_jets_all_nC_medium_all_stack_1->SetBinError(6,0.1639792);
   VbbHcc_jets_all_nC_medium_all_stack_1->SetBinError(7,0.04380119);
   VbbHcc_jets_all_nC_medium_all_stack_1->SetBinError(8,0.01098232);
   VbbHcc_jets_all_nC_medium_all_stack_1->SetBinError(9,0.002513684);
   VbbHcc_jets_all_nC_medium_all_stack_1->SetEntries(1454659);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_all_nC_medium_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nC_medium_all_stack_1->SetLineColor(ci);
   VbbHcc_jets_all_nC_medium_all_stack_1->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nC_medium_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_nC_medium_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_nC_medium_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_nC_medium_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_nC_medium_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_all_nC_medium_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_nC_medium_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_nC_medium_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nC_medium_all_stack_1,"");
   
   TH1D *VbbHcc_jets_all_nC_medium_all_stack_2 = new TH1D("VbbHcc_jets_all_nC_medium_all_stack_2","",10,-0.5,9.5);
   VbbHcc_jets_all_nC_medium_all_stack_2->SetBinContent(1,37.49631);
   VbbHcc_jets_all_nC_medium_all_stack_2->SetBinContent(2,107.0426);
   VbbHcc_jets_all_nC_medium_all_stack_2->SetBinContent(3,113.4046);
   VbbHcc_jets_all_nC_medium_all_stack_2->SetBinContent(4,57.95128);
   VbbHcc_jets_all_nC_medium_all_stack_2->SetBinContent(5,15.68474);
   VbbHcc_jets_all_nC_medium_all_stack_2->SetBinContent(6,2.061265);
   VbbHcc_jets_all_nC_medium_all_stack_2->SetBinContent(7,0.1224478);
   VbbHcc_jets_all_nC_medium_all_stack_2->SetBinContent(8,0.003384533);
   VbbHcc_jets_all_nC_medium_all_stack_2->SetBinError(1,0.1037409);
   VbbHcc_jets_all_nC_medium_all_stack_2->SetBinError(2,0.1763657);
   VbbHcc_jets_all_nC_medium_all_stack_2->SetBinError(3,0.1824936);
   VbbHcc_jets_all_nC_medium_all_stack_2->SetBinError(4,0.1306687);
   VbbHcc_jets_all_nC_medium_all_stack_2->SetBinError(5,0.06850196);
   VbbHcc_jets_all_nC_medium_all_stack_2->SetBinError(6,0.02508035);
   VbbHcc_jets_all_nC_medium_all_stack_2->SetBinError(7,0.006310587);
   VbbHcc_jets_all_nC_medium_all_stack_2->SetBinError(8,0.001053112);
   VbbHcc_jets_all_nC_medium_all_stack_2->SetEntries(1387055);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_all_nC_medium_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nC_medium_all_stack_2->SetLineColor(ci);
   VbbHcc_jets_all_nC_medium_all_stack_2->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nC_medium_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_nC_medium_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_nC_medium_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_nC_medium_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_nC_medium_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_all_nC_medium_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_nC_medium_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_nC_medium_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nC_medium_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.62,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_nC_medium_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nC_medium_all_stack_1","ZHcc","F");

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
   nC_medium_jets_all_all->Modified();
   nC_medium_jets_all_all->cd();
   nC_medium_jets_all_all->SetSelected(nC_medium_jets_all_all);
}
