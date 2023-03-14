#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_both_17_logY()
{
//=========Macro generated from canvas: H_dR_Bj0_both_17/H_dR_Bj0_both_17
//=========  (Thu Mar  9 12:19:51 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj0_both_17 = new TCanvas("H_dR_Bj0_both_17", "H_dR_Bj0_both_17",0,0,600,600);
   H_dR_Bj0_both_17->SetHighLightColor(2);
   H_dR_Bj0_both_17->Range(-1.310117,-0.1613808,7.029799,1.183459);
   H_dR_Bj0_both_17->SetFillColor(0);
   H_dR_Bj0_both_17->SetFillStyle(4000);
   H_dR_Bj0_both_17->SetBorderMode(0);
   H_dR_Bj0_both_17->SetBorderSize(2);
   H_dR_Bj0_both_17->SetLogy();
   H_dR_Bj0_both_17->SetLeftMargin(0.15709);
   H_dR_Bj0_both_17->SetRightMargin(0.1234783);
   H_dR_Bj0_both_17->SetBottomMargin(0.12);
   H_dR_Bj0_both_17->SetFrameFillStyle(1000);
   H_dR_Bj0_both_17->SetFrameBorderMode(0);
   H_dR_Bj0_both_17->SetFrameFillStyle(1000);
   H_dR_Bj0_both_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1e+10);
   
   TH1F *st_stack_170 = new TH1F("st_stack_170","",30,0,6);
   st_stack_170->SetMinimum(-2.499867e+09);
   st_stack_170->SetMaximum(-0.9991086);
   st_stack_170->SetDirectory(0);
   st_stack_170->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_170->SetLineColor(ci);
   st_stack_170->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   st_stack_170->GetXaxis()->SetRange(1,30);
   st_stack_170->GetXaxis()->SetLabelFont(42);
   st_stack_170->GetXaxis()->SetTitleOffset(1);
   st_stack_170->GetXaxis()->SetTitleFont(42);
   st_stack_170->GetYaxis()->SetTitle("Event/0.2");
   st_stack_170->GetYaxis()->SetLabelFont(42);
   st_stack_170->GetYaxis()->SetTitleSize(0.037);
   st_stack_170->GetYaxis()->SetTitleFont(42);
   st_stack_170->GetZaxis()->SetLabelFont(42);
   st_stack_170->GetZaxis()->SetTitleOffset(1);
   st_stack_170->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_170);
   
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_1 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(1,0.1158535);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(2,0.5681279);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(3,0.7107169);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(4,0.5480763);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(5,0.4467045);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(6,0.3397628);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(7,0.232821);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(8,0.1704384);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(9,0.140361);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(10,0.1013718);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(11,0.1080557);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(12,0.09246003);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(13,0.07463641);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(14,0.07352243);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(15,0.0657246);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(16,0.04901496);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(17,0.03341929);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(18,0.02562145);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(19,0.02005157);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(20,0.01336772);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(21,0.002227953);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(22,0.002227953);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(23,0.003341929);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(24,0.005569881);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(25,0.001113976);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(26,0.001113976);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(1,0.01136037);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(2,0.02515713);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(3,0.02813755);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(4,0.02470919);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(5,0.02230736);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(6,0.01945476);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(7,0.01610457);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(8,0.01377913);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(9,0.01250435);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(10,0.01062666);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(11,0.01097139);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(12,0.01014881);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(13,0.009118289);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(14,0.009049986);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(15,0.008556614);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(16,0.007389283);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(17,0.006101499);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(18,0.005342443);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(19,0.004726201);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(20,0.003858927);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(21,0.0015754);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(22,0.0015754);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(23,0.001929463);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(24,0.002490927);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(25,0.001113976);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(26,0.001113976);
   VbbHcc_both_H_dR_Bj0_stack_1->SetEntries(3542);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_2 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(1,0.03746528);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(2,0.227865);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(3,0.288307);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(4,0.2527443);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(5,0.189668);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(6,0.1337628);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(7,0.09424859);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(8,0.07302802);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(9,0.0579541);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(10,0.04741699);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(11,0.03834337);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(12,0.04039225);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(13,0.03087959);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(14,0.03351386);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(15,0.02707452);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(16,0.02692817);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(17,0.01595201);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(18,0.01097616);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(19,0.009073622);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(20,0.006439345);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(21,0.00351237);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(22,0.001317139);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(23,0.001756185);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(24,0.00117079);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(25,0.000585395);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(26,0.001024441);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(27,0.0001463487);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(31,0.0001463487);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(1,0.00234158);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(2,0.005774752);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(3,0.006495643);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(4,0.006081843);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(5,0.005268555);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(6,0.004424479);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(7,0.003713915);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(8,0.003269183);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(9,0.002912303);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(10,0.002634277);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(11,0.002368861);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(12,0.002431328);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(13,0.002125838);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(14,0.002214658);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(15,0.001990558);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(16,0.001985171);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(17,0.001527926);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(18,0.001267417);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(19,0.001152351);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(20,0.0009707678);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(21,0.0007169595);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(22,0.0004390462);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(23,0.0005069669);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(24,0.0004139368);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(25,0.0002926975);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(26,0.0003872024);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(27,0.0001463487);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(31,0.0001463487);
   VbbHcc_both_H_dR_Bj0_stack_2->SetEntries(11286);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_1","ZHcc","F");

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
   H_dR_Bj0_both_17->Modified();
   H_dR_Bj0_both_17->cd();
   H_dR_Bj0_both_17->SetSelected(H_dR_Bj0_both_17);
}
