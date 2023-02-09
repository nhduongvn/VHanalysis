#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_seljet_all()
{
//=========Macro generated from canvas: Aplanarity_seljet_all/Aplanarity_seljet_all
//=========  (Wed Jan 18 11:43:16 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_seljet_all = new TCanvas("Aplanarity_seljet_all", "Aplanarity_seljet_all",0,0,600,600);
   Aplanarity_seljet_all->SetHighLightColor(2);
   Aplanarity_seljet_all->Range(-0.2183529,-7.113762e+09,1.171633,5.216759e+10);
   Aplanarity_seljet_all->SetFillColor(0);
   Aplanarity_seljet_all->SetFillStyle(4000);
   Aplanarity_seljet_all->SetBorderMode(0);
   Aplanarity_seljet_all->SetBorderSize(2);
   Aplanarity_seljet_all->SetLeftMargin(0.15709);
   Aplanarity_seljet_all->SetRightMargin(0.1234783);
   Aplanarity_seljet_all->SetBottomMargin(0.12);
   Aplanarity_seljet_all->SetFrameFillStyle(1000);
   Aplanarity_seljet_all->SetFrameBorderMode(0);
   Aplanarity_seljet_all->SetFrameFillStyle(1000);
   Aplanarity_seljet_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(4.623945e+10);
   
   TH1F *st_stack_320 = new TH1F("st_stack_320","",50,0,1);
   st_stack_320->SetMinimum(0);
   st_stack_320->SetMaximum(4.623945e+10);
   st_stack_320->SetDirectory(0);
   st_stack_320->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_320->SetLineColor(ci);
   st_stack_320->GetXaxis()->SetTitle("Aplanarity");
   st_stack_320->GetXaxis()->SetRange(1,50);
   st_stack_320->GetXaxis()->SetLabelFont(42);
   st_stack_320->GetXaxis()->SetTitleOffset(1);
   st_stack_320->GetXaxis()->SetTitleFont(42);
   st_stack_320->GetYaxis()->SetTitle("Events/0.02");
   st_stack_320->GetYaxis()->SetLabelFont(42);
   st_stack_320->GetYaxis()->SetTitleSize(0.037);
   st_stack_320->GetYaxis()->SetTitleFont(42);
   st_stack_320->GetZaxis()->SetLabelFont(42);
   st_stack_320->GetZaxis()->SetTitleOffset(1);
   st_stack_320->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_320);
   
   
   TH1D *VbbHcc_seljet_Aplanarity_all_stack_1 = new TH1D("VbbHcc_seljet_Aplanarity_all_stack_1","",50,0,1);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(0,1768.346);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(1,3.080538e+10);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(2,1.555245e+10);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(3,8.231458e+09);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(4,4.681319e+09);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(5,2.819059e+09);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(6,1.761072e+09);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(7,1.139667e+09);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(8,7.559035e+08);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(9,4.968026e+08);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(10,3.382149e+08);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(11,2.25769e+08);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(12,1.504185e+08);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(13,9.998673e+07);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(14,6.650284e+07);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(15,4.251217e+07);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(16,2.520639e+07);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(17,1.606199e+07);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(18,9224416);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(19,4950097);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(20,2381876);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(21,922305.9);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(22,324827.9);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(23,141916.4);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(24,8810.671);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(25,39.05318);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(0,688.2178);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(1,1.604731e+07);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(2,1.223083e+07);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(3,9204532);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(4,7002582);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(5,5508439);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(6,4259468);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(7,3516428);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(8,2849799);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(9,2278866);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(10,1899578);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(11,1527943);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(12,1261576);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(13,1022011);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(14,838371.7);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(15,684853.7);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(16,509556.3);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(17,436268.8);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(18,329279.8);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(19,227786.2);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(20,162727.7);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(21,97211.55);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(22,56451.15);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(23,42880.74);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(24,3543.198);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(25,39.05318);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetEntries(2.021266e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_seljet_Aplanarity_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Aplanarity_all_stack_1->SetLineColor(ci);
   VbbHcc_seljet_Aplanarity_all_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_seljet_Aplanarity_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Aplanarity_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Aplanarity_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Aplanarity_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Aplanarity_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Aplanarity_all_stack_1,"");
   
   TH1D *VbbHcc_seljet_Aplanarity_all_stack_2 = new TH1D("VbbHcc_seljet_Aplanarity_all_stack_2","",50,0,1);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(0,4.205243);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(1,2.091767e+07);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(2,1.619413e+07);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(3,1.096997e+07);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(4,7523775);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(5,5272930);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(6,3755683);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(7,2703739);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(8,1954901);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(9,1415504);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(10,1020485);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(11,730683.7);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(12,517465.9);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(13,361216.2);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(14,247242.4);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(15,164859.5);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(16,106791.6);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(17,66480.21);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(18,39141.94);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(19,21664.03);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(20,10909.11);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(21,4855.952);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(22,1784.362);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(23,489.5325);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(24,72.07223);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(25,2.131886);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(0,0.5634053);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(1,1319.558);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(2,1167.6);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(3,961.9056);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(4,797.47);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(5,668.1247);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(6,564.2564);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(7,478.6915);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(8,407.0821);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(9,346.9377);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(10,293.8074);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(11,248.8376);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(12,210.4546);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(13,175.0643);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(14,144.8082);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(15,118.5578);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(16,95.32127);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(17,75.04513);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(18,57.89612);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(19,43.11079);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(20,30.14189);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(21,20.15713);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(22,12.19742);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(23,7.386761);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(24,2.393599);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(25,0.4002568);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetEntries(1.046864e+09);

   ci = TColor::GetColor("#990099");
   VbbHcc_seljet_Aplanarity_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Aplanarity_all_stack_2->SetLineColor(ci);
   VbbHcc_seljet_Aplanarity_all_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_seljet_Aplanarity_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Aplanarity_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Aplanarity_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Aplanarity_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Aplanarity_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Aplanarity_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_seljet_Aplanarity_all_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_seljet_Aplanarity_all_stack_1","QCD","F");

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
   Aplanarity_seljet_all->Modified();
   Aplanarity_seljet_all->cd();
   Aplanarity_seljet_all->SetSelected(Aplanarity_seljet_all);
}
