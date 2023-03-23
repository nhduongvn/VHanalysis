#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_algo_18()
{
//=========Macro generated from canvas: Z_dR_algo_18/Z_dR_algo_18
//=========  (Thu Mar 23 11:25:13 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_algo_18 = new TCanvas("Z_dR_algo_18", "Z_dR_algo_18",0,0,600,600);
   Z_dR_algo_18->SetHighLightColor(2);
   Z_dR_algo_18->Range(-1.310117,-0.04411056,7.029799,0.3234774);
   Z_dR_algo_18->SetFillColor(0);
   Z_dR_algo_18->SetFillStyle(4000);
   Z_dR_algo_18->SetBorderMode(0);
   Z_dR_algo_18->SetBorderSize(2);
   Z_dR_algo_18->SetLeftMargin(0.15709);
   Z_dR_algo_18->SetRightMargin(0.1234783);
   Z_dR_algo_18->SetBottomMargin(0.12);
   Z_dR_algo_18->SetFrameFillStyle(1000);
   Z_dR_algo_18->SetFrameBorderMode(0);
   Z_dR_algo_18->SetFrameFillStyle(1000);
   Z_dR_algo_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(0.2867186);
   
   TH1F *st_stack_115 = new TH1F("st_stack_115","",30,0,6);
   st_stack_115->SetMinimum(0);
   st_stack_115->SetMaximum(0.2867186);
   st_stack_115->SetDirectory(0);
   st_stack_115->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_115->SetLineColor(ci);
   st_stack_115->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_115->GetXaxis()->SetRange(1,30);
   st_stack_115->GetXaxis()->SetLabelFont(42);
   st_stack_115->GetXaxis()->SetTitleOffset(1);
   st_stack_115->GetXaxis()->SetTitleFont(42);
   st_stack_115->GetYaxis()->SetTitle("Event/0.2");
   st_stack_115->GetYaxis()->SetLabelFont(42);
   st_stack_115->GetYaxis()->SetTitleSize(0.037);
   st_stack_115->GetYaxis()->SetTitleFont(42);
   st_stack_115->GetZaxis()->SetLabelFont(42);
   st_stack_115->GetZaxis()->SetTitleOffset(1);
   st_stack_115->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_115);
   
   
   TH1D *VbbHcc_algo_Z_dR_stack_1 = new TH1D("VbbHcc_algo_Z_dR_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(3,0.1186537);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(4,0.1523224);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(5,0.1699213);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(6,0.1377822);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(7,0.08653535);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(8,0.04207505);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(9,0.03394538);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(10,0.01368741);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(11,0.012857);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(12,0.007888186);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(13,0.002582708);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(14,0.01567399);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(15,0.005111486);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(16,0.009680971);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(17,0.01195429);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(18,0.01177289);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(20,0.002736771);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(3,0.01788016);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(4,0.02089302);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(5,0.02136996);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(6,0.04309179);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(7,0.01578064);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(8,0.01042885);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(9,0.009267809);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(10,0.006154091);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(11,0.005779683);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(12,0.004572065);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(13,0.002582708);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(14,0.006440762);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(15,0.003616833);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(16,0.004882806);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(17,0.006074812);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(18,0.005927769);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(20,0.002736771);
   VbbHcc_algo_Z_dR_stack_1->SetEntries(320);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_stack_1->SetFillColor(ci);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_2 = new TH1D("VbbHcc_algo_Z_dR_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(3,0.02994217);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(4,0.04960227);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(5,0.06805511);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(6,0.0453028);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(7,0.03136201);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(8,0.01116253);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(9,0.007273566);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(10,0.003451261);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(11,0.003751259);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(12,0.002274357);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(13,0.004772018);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(14,0.004690242);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(15,0.00275278);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(16,0.004846153);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(17,0.002145321);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(18,0.003780192);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(19,0.00185026);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(20,0.001453174);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(23,0.0003290641);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(25,0.0003156401);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(3,0.004101632);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(4,0.004499991);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(5,0.004946786);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(6,0.00406894);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(7,0.003311089);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(8,0.001973271);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(9,0.001637637);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(10,0.001096094);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(11,0.001160778);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(12,0.0008648548);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(13,0.001349719);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(14,0.001316213);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(15,0.0009591253);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(16,0.00144211);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(17,0.0008860461);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(18,0.00116077);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(19,0.0008322595);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(20,0.0006656022);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(23,0.0003290641);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(25,0.0003156401);
   VbbHcc_algo_Z_dR_stack_2->SetEntries(817);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_stack_2->SetFillColor(ci);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_algo_18->Modified();
   Z_dR_algo_18->cd();
   Z_dR_algo_18->SetSelected(Z_dR_algo_18);
}
