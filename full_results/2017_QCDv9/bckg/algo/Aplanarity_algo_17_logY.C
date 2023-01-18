#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_algo_17_logY()
{
//=========Macro generated from canvas: Aplanarity_algo_17/Aplanarity_algo_17
//=========  (Wed Jan 18 11:42:53 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_algo_17 = new TCanvas("Aplanarity_algo_17", "Aplanarity_algo_17",0,0,600,600);
   Aplanarity_algo_17->SetHighLightColor(2);
   Aplanarity_algo_17->Range(-0.2183529,-1.033146,1.171633,10.20407);
   Aplanarity_algo_17->SetFillColor(0);
   Aplanarity_algo_17->SetFillStyle(4000);
   Aplanarity_algo_17->SetBorderMode(0);
   Aplanarity_algo_17->SetBorderSize(2);
   Aplanarity_algo_17->SetLogy();
   Aplanarity_algo_17->SetLeftMargin(0.15709);
   Aplanarity_algo_17->SetRightMargin(0.1234783);
   Aplanarity_algo_17->SetBottomMargin(0.12);
   Aplanarity_algo_17->SetFrameFillStyle(1000);
   Aplanarity_algo_17->SetFrameBorderMode(0);
   Aplanarity_algo_17->SetFrameFillStyle(1000);
   Aplanarity_algo_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(4.745934e+08);
   
   TH1F *st_stack_126 = new TH1F("st_stack_126","",50,0,1);
   st_stack_126->SetMinimum(2.066901);
   st_stack_126->SetMaximum(1.20322e+09);
   st_stack_126->SetDirectory(0);
   st_stack_126->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_126->SetLineColor(ci);
   st_stack_126->GetXaxis()->SetTitle("Aplanarity");
   st_stack_126->GetXaxis()->SetRange(1,50);
   st_stack_126->GetXaxis()->SetLabelFont(42);
   st_stack_126->GetXaxis()->SetTitleOffset(1);
   st_stack_126->GetXaxis()->SetTitleFont(42);
   st_stack_126->GetYaxis()->SetTitle("Events/0.02");
   st_stack_126->GetYaxis()->SetLabelFont(42);
   st_stack_126->GetYaxis()->SetTitleSize(0.037);
   st_stack_126->GetYaxis()->SetTitleFont(42);
   st_stack_126->GetZaxis()->SetLabelFont(42);
   st_stack_126->GetZaxis()->SetTitleOffset(1);
   st_stack_126->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_126);
   
   
   TH1D *VbbHcc_algo_Aplanarity_stack_1 = new TH1D("VbbHcc_algo_Aplanarity_stack_1","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(1,4704157);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(2,2225605);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(3,1091520);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(4,538617.8);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(5,366468.6);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(6,241535.5);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(7,208556.5);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(8,51344.31);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(9,71248.55);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(10,36481.23);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(11,26164.29);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(12,8406.518);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(13,21827.42);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(14,5642.996);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(15,2135.895);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(16,27374.86);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(17,27.23899);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(18,358.1027);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(19,335.7549);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(21,394.3944);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(1,183446.6);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(2,134483.2);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(3,101272.7);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(4,65915.75);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(5,56179.77);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(6,45885.54);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(7,51689.04);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(8,15717.47);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(9,27463.01);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(10,19421.73);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(11,18154.4);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(12,3131.214);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(13,18626.58);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(14,2704.677);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(15,1525.365);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(16,18558.28);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(17,27.23899);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(18,332.9729);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(19,335.7549);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(21,394.3944);
   VbbHcc_algo_Aplanarity_stack_1->SetEntries(41411);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_2 = new TH1D("VbbHcc_algo_Aplanarity_stack_2","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(1,41777.7);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(2,31153.94);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(3,21253.21);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(4,14788.14);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(5,10570.17);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(6,7650.546);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(7,5613.397);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(8,4091.28);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(9,2999.092);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(10,2193.866);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(11,1602.537);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(12,1164.748);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(13,811.1599);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(14,554.475);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(15,366.6549);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(16,239.3858);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(17,151.9312);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(18,92.50538);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(19,53.48808);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(20,23.38261);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(21,11.20681);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(22,3.765287);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(23,1.112433);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(24,0.1240831);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(1,53.44522);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(2,46.86441);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(3,38.92792);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(4,32.55471);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(5,27.58456);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(6,23.53565);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(7,20.18489);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(8,17.25082);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(9,14.78141);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(10,12.66777);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(11,10.84455);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(12,9.257921);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(13,7.726363);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(14,6.391964);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(15,5.199159);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(16,4.221257);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(17,3.354635);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(18,2.628783);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(19,1.998879);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(20,1.295402);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(21,0.9246182);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(22,0.5235614);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(23,0.2860971);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(24,0.09435937);
   VbbHcc_algo_Aplanarity_stack_2->SetEntries(2316312);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_1","QCD","F");

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
   Aplanarity_algo_17->Modified();
   Aplanarity_algo_17->cd();
   Aplanarity_algo_17->SetSelected(Aplanarity_algo_17);
}
