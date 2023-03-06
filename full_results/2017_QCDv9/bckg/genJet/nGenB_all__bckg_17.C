#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nGenB_all__bckg_17()
{
//=========Macro generated from canvas: nGenB_all__bckg_17/nGenB_all__bckg_17
//=========  (Mon Mar  6 10:53:08 2023) by ROOT version 6.26/06
   TCanvas *nGenB_all__bckg_17 = new TCanvas("nGenB_all__bckg_17", "nGenB_all__bckg_17",0,0,600,600);
   nGenB_all__bckg_17->SetHighLightColor(2);
   nGenB_all__bckg_17->Range(-3.775293,-2.099467e+11,17.0745,1.539609e+12);
   nGenB_all__bckg_17->SetFillColor(0);
   nGenB_all__bckg_17->SetFillStyle(4000);
   nGenB_all__bckg_17->SetBorderMode(0);
   nGenB_all__bckg_17->SetBorderSize(2);
   nGenB_all__bckg_17->SetLeftMargin(0.15709);
   nGenB_all__bckg_17->SetRightMargin(0.1234783);
   nGenB_all__bckg_17->SetBottomMargin(0.12);
   nGenB_all__bckg_17->SetFrameFillStyle(1000);
   nGenB_all__bckg_17->SetFrameBorderMode(0);
   nGenB_all__bckg_17->SetFrameFillStyle(1000);
   nGenB_all__bckg_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   
   TH1F *st_stack_16 = new TH1F("st_stack_16","",15,-0.5,14.5);
   st_stack_16->SetMinimum(0);
   st_stack_16->SetMaximum(1.364653e+12);
   st_stack_16->SetDirectory(0);
   st_stack_16->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_16->SetLineColor(ci);
   st_stack_16->GetXaxis()->SetTitle("Gen b-jet multiplicity");
   st_stack_16->GetXaxis()->SetLabelFont(42);
   st_stack_16->GetXaxis()->SetTitleOffset(1);
   st_stack_16->GetXaxis()->SetTitleFont(42);
   st_stack_16->GetYaxis()->SetTitle("Events/1.0");
   st_stack_16->GetYaxis()->SetLabelFont(42);
   st_stack_16->GetYaxis()->SetTitleSize(0.037);
   st_stack_16->GetYaxis()->SetTitleFont(42);
   st_stack_16->GetZaxis()->SetLabelFont(42);
   st_stack_16->GetZaxis()->SetTitleOffset(1);
   st_stack_16->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_16);
   
   
   TH1D *nGenB_all_stack_1 = new TH1D("nGenB_all_stack_1","",15,-0.5,14.5);
   nGenB_all_stack_1->SetBinContent(1,1.29967e+12);
   nGenB_all_stack_1->SetBinContent(2,6.783485e+10);
   nGenB_all_stack_1->SetBinContent(3,4.008579e+10);
   nGenB_all_stack_1->SetBinContent(4,2.199534e+09);
   nGenB_all_stack_1->SetBinContent(5,3.22686e+08);
   nGenB_all_stack_1->SetBinContent(6,2.056219e+07);
   nGenB_all_stack_1->SetBinContent(7,1448267);
   nGenB_all_stack_1->SetBinContent(8,39604.63);
   nGenB_all_stack_1->SetBinContent(9,2532.074);
   nGenB_all_stack_1->SetBinContent(10,14.62896);
   nGenB_all_stack_1->SetBinError(1,1.467331e+08);
   nGenB_all_stack_1->SetBinError(2,3.331731e+07);
   nGenB_all_stack_1->SetBinError(3,2.534334e+07);
   nGenB_all_stack_1->SetBinError(4,5840556);
   nGenB_all_stack_1->SetBinError(5,2177334);
   nGenB_all_stack_1->SetBinError(6,532951.3);
   nGenB_all_stack_1->SetBinError(7,134895.3);
   nGenB_all_stack_1->SetBinError(8,10129.56);
   nGenB_all_stack_1->SetBinError(9,1708.345);
   nGenB_all_stack_1->SetBinError(10,11.01396);
   nGenB_all_stack_1->SetEntries(2.975996e+08);

   ci = TColor::GetColor("#ff6600");
   nGenB_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   nGenB_all_stack_1->SetLineColor(ci);
   nGenB_all_stack_1->GetXaxis()->SetRange(1,15);
   nGenB_all_stack_1->GetXaxis()->SetLabelFont(42);
   nGenB_all_stack_1->GetXaxis()->SetTitleOffset(1);
   nGenB_all_stack_1->GetXaxis()->SetTitleFont(42);
   nGenB_all_stack_1->GetYaxis()->SetLabelFont(42);
   nGenB_all_stack_1->GetYaxis()->SetTitleFont(42);
   nGenB_all_stack_1->GetZaxis()->SetLabelFont(42);
   nGenB_all_stack_1->GetZaxis()->SetTitleOffset(1);
   nGenB_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(nGenB_all_stack_1,"");
   
   TH1D *nGenB_all_stack_2 = new TH1D("nGenB_all_stack_2","",15,-0.5,14.5);
   nGenB_all_stack_2->SetBinContent(1,43453.72);
   nGenB_all_stack_2->SetBinContent(2,2817960);
   nGenB_all_stack_2->SetBinContent(3,3.031724e+07);
   nGenB_all_stack_2->SetBinContent(4,2597021);
   nGenB_all_stack_2->SetBinContent(5,445319.4);
   nGenB_all_stack_2->SetBinContent(6,43865.29);
   nGenB_all_stack_2->SetBinContent(7,4766.424);
   nGenB_all_stack_2->SetBinContent(8,450.8992);
   nGenB_all_stack_2->SetBinContent(9,40.51814);
   nGenB_all_stack_2->SetBinContent(10,3.574775);
   nGenB_all_stack_2->SetBinContent(11,0.4290011);
   nGenB_all_stack_2->SetBinError(1,53.38514);
   nGenB_all_stack_2->SetBinError(2,429.1226);
   nGenB_all_stack_2->SetBinError(3,1405.709);
   nGenB_all_stack_2->SetBinError(4,413.0027);
   nGenB_all_stack_2->SetBinError(5,171.3658);
   nGenB_all_stack_2->SetBinError(6,53.97718);
   nGenB_all_stack_2->SetBinError(7,17.81419);
   nGenB_all_stack_2->SetBinError(8,5.494897);
   nGenB_all_stack_2->SetBinError(9,1.656807);
   nGenB_all_stack_2->SetBinError(10,0.4994279);
   nGenB_all_stack_2->SetBinError(11,0.1487331);
   nGenB_all_stack_2->SetEntries(6.301685e+08);

   ci = TColor::GetColor("#990099");
   nGenB_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   nGenB_all_stack_2->SetLineColor(ci);
   nGenB_all_stack_2->GetXaxis()->SetRange(1,15);
   nGenB_all_stack_2->GetXaxis()->SetLabelFont(42);
   nGenB_all_stack_2->GetXaxis()->SetTitleOffset(1);
   nGenB_all_stack_2->GetXaxis()->SetTitleFont(42);
   nGenB_all_stack_2->GetYaxis()->SetLabelFont(42);
   nGenB_all_stack_2->GetYaxis()->SetTitleFont(42);
   nGenB_all_stack_2->GetZaxis()->SetLabelFont(42);
   nGenB_all_stack_2->GetZaxis()->SetTitleOffset(1);
   nGenB_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(nGenB_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("nGenB_all_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("nGenB_all_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nGenB_all__bckg_17->Modified();
   nGenB_all__bckg_17->cd();
   nGenB_all__bckg_17->SetSelected(nGenB_all__bckg_17);
}
