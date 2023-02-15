#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_algo_all_logY()
{
//=========Macro generated from canvas: Aplanarity_algo_all/Aplanarity_algo_all
//=========  (Tue Feb 14 16:02:03 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_algo_all = new TCanvas("Aplanarity_algo_all", "Aplanarity_algo_all",0,0,600,600);
   Aplanarity_algo_all->SetHighLightColor(2);
   Aplanarity_algo_all->Range(-0.2183529,-1.105195,1.171633,10.60629);
   Aplanarity_algo_all->SetFillColor(0);
   Aplanarity_algo_all->SetFillStyle(4000);
   Aplanarity_algo_all->SetBorderMode(0);
   Aplanarity_algo_all->SetBorderSize(2);
   Aplanarity_algo_all->SetLogy();
   Aplanarity_algo_all->SetLeftMargin(0.15709);
   Aplanarity_algo_all->SetRightMargin(0.1234783);
   Aplanarity_algo_all->SetBottomMargin(0.12);
   Aplanarity_algo_all->SetFrameFillStyle(1000);
   Aplanarity_algo_all->SetFrameBorderMode(0);
   Aplanarity_algo_all->SetFrameFillStyle(1000);
   Aplanarity_algo_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(1.045961e+09);
   
   TH1F *st_stack_128 = new TH1F("st_stack_128","",50,0,1);
   st_stack_128->SetMinimum(1.996104);
   st_stack_128->SetMaximum(2.723581e+09);
   st_stack_128->SetDirectory(0);
   st_stack_128->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_128->SetLineColor(ci);
   st_stack_128->GetXaxis()->SetTitle("Aplanarity");
   st_stack_128->GetXaxis()->SetRange(1,50);
   st_stack_128->GetXaxis()->SetLabelFont(42);
   st_stack_128->GetXaxis()->SetTitleOffset(1);
   st_stack_128->GetXaxis()->SetTitleFont(42);
   st_stack_128->GetYaxis()->SetTitle("Events/0.02");
   st_stack_128->GetYaxis()->SetLabelFont(42);
   st_stack_128->GetYaxis()->SetTitleSize(0.037);
   st_stack_128->GetYaxis()->SetTitleFont(42);
   st_stack_128->GetZaxis()->SetLabelFont(42);
   st_stack_128->GetZaxis()->SetTitleOffset(1);
   st_stack_128->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_128);
   
   
   TH1D *VbbHcc_algo_Aplanarity_all_stack_1 = new TH1D("VbbHcc_algo_Aplanarity_all_stack_1","",50,0,1);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(1,1.033738e+07);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(2,4264649);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(3,2071771);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(4,1117394);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(5,595464.1);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(6,461782.4);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(7,360972.5);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(8,153973.4);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(9,110219.6);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(10,43263.65);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(11,20071.83);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(12,23744.39);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(13,18291.82);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(14,13366.21);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(15,7751.579);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(16,16795.53);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(17,70.52238);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(18,3017.887);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(19,1702.051);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(20,324.9408);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(1,256367.8);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(2,179216.6);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(3,127617);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(4,93536.51);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(5,61439.58);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(6,66567.91);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(7,63313.86);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(8,37637.41);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(9,36458.82);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(10,7785.876);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(11,4711.473);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(12,5604.623);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(13,5149.855);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(14,5130.381);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(15,3547.443);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(16,12497.97);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(17,41.46598);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(18,2979.922);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(19,1410.455);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(20,324.9408);
   VbbHcc_algo_Aplanarity_all_stack_1->SetEntries(109852);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Aplanarity_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_all_stack_1->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_all_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_all_stack_1,"");
   
   TH1D *VbbHcc_algo_Aplanarity_all_stack_2 = new TH1D("VbbHcc_algo_Aplanarity_all_stack_2","",50,0,1);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(1,122235.6);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(2,90111.07);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(3,61392.89);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(4,42883);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(5,30656.14);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(6,22183.69);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(7,16269.62);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(8,11956.5);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(9,8778.285);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(10,6408.597);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(11,4665.53);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(12,3363.309);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(13,2349.077);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(14,1618.007);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(15,1102.384);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(16,706.7157);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(17,446.8316);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(18,265.0357);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(19,148.2809);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(20,72.87615);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(21,30.19356);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(22,11.96525);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(23,3.595486);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(24,0.2364037);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(1,97.3469);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(2,84.23828);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(3,69.86031);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(4,58.34962);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(5,49.59653);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(6,42.24566);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(7,36.2691);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(8,30.74813);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(9,26.39807);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(10,22.58833);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(11,19.16999);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(12,16.50855);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(13,13.62433);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(14,11.25814);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(15,9.371218);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(16,7.487995);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(17,6.048509);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(18,4.619463);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(19,3.536101);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(20,2.38997);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(21,1.568957);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(22,0.9655165);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(23,0.5336918);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(24,0.123024);
   VbbHcc_algo_Aplanarity_all_stack_2->SetEntries(6312161);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_Aplanarity_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_all_stack_2->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_all_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Aplanarity_all_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_all_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_algo_all->Modified();
   Aplanarity_algo_all->cd();
   Aplanarity_algo_all->SetSelected(Aplanarity_algo_all);
}
