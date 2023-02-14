#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj1_algo_all_logY()
{
//=========Macro generated from canvas: Z_dR_Bj1_algo_all/Z_dR_Bj1_algo_all
//=========  (Tue Feb 14 10:43:07 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj1_algo_all = new TCanvas("Z_dR_Bj1_algo_all", "Z_dR_Bj1_algo_all",0,0,600,600);
   Z_dR_Bj1_algo_all->SetHighLightColor(2);
   Z_dR_Bj1_algo_all->Range(-1.310117,0.4735158,7.029799,2.84312);
   Z_dR_Bj1_algo_all->SetFillColor(0);
   Z_dR_Bj1_algo_all->SetFillStyle(4000);
   Z_dR_Bj1_algo_all->SetBorderMode(0);
   Z_dR_Bj1_algo_all->SetBorderSize(2);
   Z_dR_Bj1_algo_all->SetLogy();
   Z_dR_Bj1_algo_all->SetLeftMargin(0.15709);
   Z_dR_Bj1_algo_all->SetRightMargin(0.1234783);
   Z_dR_Bj1_algo_all->SetBottomMargin(0.12);
   Z_dR_Bj1_algo_all->SetFrameFillStyle(1000);
   Z_dR_Bj1_algo_all->SetFrameBorderMode(0);
   Z_dR_Bj1_algo_all->SetFrameFillStyle(1000);
   Z_dR_Bj1_algo_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(310.9593);
   
   TH1F *st_stack_120 = new TH1F("st_stack_120","",30,0,6);
   st_stack_120->SetMinimum(5.726223);
   st_stack_120->SetMaximum(403.7933);
   st_stack_120->SetDirectory(0);
   st_stack_120->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_120->SetLineColor(ci);
   st_stack_120->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   st_stack_120->GetXaxis()->SetRange(1,30);
   st_stack_120->GetXaxis()->SetLabelFont(42);
   st_stack_120->GetXaxis()->SetTitleOffset(1);
   st_stack_120->GetXaxis()->SetTitleFont(42);
   st_stack_120->GetYaxis()->SetTitle("Events/0.2");
   st_stack_120->GetYaxis()->SetLabelFont(42);
   st_stack_120->GetYaxis()->SetTitleSize(0.037);
   st_stack_120->GetYaxis()->SetTitleFont(42);
   st_stack_120->GetZaxis()->SetLabelFont(42);
   st_stack_120->GetZaxis()->SetTitleOffset(1);
   st_stack_120->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_120);
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_all_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj1_all_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(1,0.004315259);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(2,1.082223);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(3,2.293998);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(4,2.346436);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(5,1.716637);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(6,1.152463);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(7,0.6135929);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(8,0.3966293);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(9,0.2741758);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(10,0.1459885);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(11,0.07383803);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(12,0.09063982);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(13,0.04317916);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(14,0.04403015);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(15,0.05860321);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(16,0.0368244);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(17,0.01087253);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(18,0.01430305);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(19,0.008866782);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(20,0.003160502);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(22,0.003856013);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(23,0.004315259);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(24,0.001580251);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(1,0.003158712);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(2,0.04831932);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(3,0.07006478);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(4,0.07107714);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(5,0.06069214);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(6,0.04945478);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(7,0.03610099);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(8,0.02909603);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(9,0.02405698);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(10,0.01773392);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(11,0.01268748);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(12,0.01409187);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(13,0.009833369);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(14,0.009577233);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(15,0.01128717);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(16,0.009050929);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(17,0.00451076);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(18,0.005523506);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(19,0.004509506);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(20,0.002234813);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(22,0.002770611);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(23,0.003158712);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(24,0.001580251);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetEntries(5082);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_all_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_all_stack_2 = new TH1D("VbbHcc_algo_Z_dR_Bj1_all_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(1,0.0002076057);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(2,0.2484858);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(3,0.7503865);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(4,0.763157);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(5,0.4805689);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(6,0.2153988);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(7,0.09982093);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(8,0.05797349);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(9,0.03060588);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(10,0.02670906);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(11,0.02358532);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(12,0.01967823);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(13,0.01393645);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(14,0.01075645);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(15,0.009003558);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(16,0.01221962);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(17,0.006029204);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(18,0.004646138);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(19,0.003227341);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(20,0.0005648715);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(21,0.0005993136);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(24,0.0002996568);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(25,0.0002076057);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(1,0.0002076057);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(2,0.008376384);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(3,0.01451844);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(4,0.01459806);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(5,0.01160702);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(6,0.007765998);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(7,0.005280896);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(8,0.004051388);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(9,0.002953212);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(10,0.002764673);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(11,0.002616963);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(12,0.002356427);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(13,0.002009107);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(14,0.001699004);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(15,0.001579595);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(16,0.001866897);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(17,0.001279129);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(18,0.001123783);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(19,0.0009849047);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(20,0.0004132058);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(21,0.0004237787);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(24,0.0002996568);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(25,0.0002076057);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetEntries(10346);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_all_stack_1","ZHcc","F");

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
   Z_dR_Bj1_algo_all->Modified();
   Z_dR_Bj1_algo_all->cd();
   Z_dR_Bj1_algo_all->SetSelected(Z_dR_Bj1_algo_all);
}
