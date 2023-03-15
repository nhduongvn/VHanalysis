#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_both_18()
{
//=========Macro generated from canvas: H_dR_both_18/H_dR_both_18
//=========  (Wed Jan 18 11:40:24 2023) by ROOT version 6.26/06
   TCanvas *H_dR_both_18 = new TCanvas("H_dR_both_18", "H_dR_both_18",0,0,600,600);
   H_dR_both_18->SetHighLightColor(2);
   H_dR_both_18->Range(-1.353788,-0.3655076,7.264125,2.680389);
   H_dR_both_18->SetFillColor(0);
   H_dR_both_18->SetFillStyle(4000);
   H_dR_both_18->SetBorderMode(0);
   H_dR_both_18->SetBorderSize(2);
   H_dR_both_18->SetLeftMargin(0.15709);
   H_dR_both_18->SetRightMargin(0.1234783);
   H_dR_both_18->SetBottomMargin(0.12);
   H_dR_both_18->SetFrameFillStyle(1000);
   H_dR_both_18->SetFrameBorderMode(0);
   H_dR_both_18->SetFrameFillStyle(1000);
   H_dR_both_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(2.3758);
   
   TH1F *st_stack_151 = new TH1F("st_stack_151","",30,0,6);
   st_stack_151->SetMinimum(0);
   st_stack_151->SetMaximum(2.3758);
   st_stack_151->SetDirectory(0);
   st_stack_151->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_151->SetLineColor(ci);
   st_stack_151->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_151->GetXaxis()->SetRange(1,31);
   st_stack_151->GetXaxis()->SetLabelFont(42);
   st_stack_151->GetXaxis()->SetTitleOffset(1);
   st_stack_151->GetXaxis()->SetTitleFont(42);
   st_stack_151->GetYaxis()->SetTitle("Events/0.2");
   st_stack_151->GetYaxis()->SetLabelFont(42);
   st_stack_151->GetYaxis()->SetTitleSize(0.037);
   st_stack_151->GetYaxis()->SetTitleFont(42);
   st_stack_151->GetZaxis()->SetLabelFont(42);
   st_stack_151->GetZaxis()->SetTitleOffset(1);
   st_stack_151->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_151);
   
   
   TH1D *VbbHcc_both_H_dR_stack_1 = new TH1D("VbbHcc_both_H_dR_stack_1","",30,0,6);
   VbbHcc_both_H_dR_stack_1->SetBinContent(3,0.2553393);
   VbbHcc_both_H_dR_stack_1->SetBinContent(4,0.5305992);
   VbbHcc_both_H_dR_stack_1->SetBinContent(5,0.708727);
   VbbHcc_both_H_dR_stack_1->SetBinContent(6,0.8083914);
   VbbHcc_both_H_dR_stack_1->SetBinContent(7,0.9432473);
   VbbHcc_both_H_dR_stack_1->SetBinContent(8,1.099096);
   VbbHcc_both_H_dR_stack_1->SetBinContent(9,1.16057);
   VbbHcc_both_H_dR_stack_1->SetBinContent(10,1.148618);
   VbbHcc_both_H_dR_stack_1->SetBinContent(11,1.192154);
   VbbHcc_both_H_dR_stack_1->SetBinContent(12,1.112874);
   VbbHcc_both_H_dR_stack_1->SetBinContent(13,1.174218);
   VbbHcc_both_H_dR_stack_1->SetBinContent(14,1.243143);
   VbbHcc_both_H_dR_stack_1->SetBinContent(15,1.196608);
   VbbHcc_both_H_dR_stack_1->SetBinContent(16,1.275555);
   VbbHcc_both_H_dR_stack_1->SetBinContent(17,0.54019);
   VbbHcc_both_H_dR_stack_1->SetBinContent(18,0.2918875);
   VbbHcc_both_H_dR_stack_1->SetBinContent(19,0.156383);
   VbbHcc_both_H_dR_stack_1->SetBinContent(20,0.09013505);
   VbbHcc_both_H_dR_stack_1->SetBinContent(21,0.06899573);
   VbbHcc_both_H_dR_stack_1->SetBinContent(22,0.04929481);
   VbbHcc_both_H_dR_stack_1->SetBinContent(23,0.01858142);
   VbbHcc_both_H_dR_stack_1->SetBinContent(24,0.01114059);
   VbbHcc_both_H_dR_stack_1->SetBinContent(25,0.002496094);
   VbbHcc_both_H_dR_stack_1->SetBinContent(26,0.005683742);
   VbbHcc_both_H_dR_stack_1->SetBinContent(27,0.002177811);
   VbbHcc_both_H_dR_stack_1->SetBinError(3,0.02513061);
   VbbHcc_both_H_dR_stack_1->SetBinError(4,0.03712752);
   VbbHcc_both_H_dR_stack_1->SetBinError(5,0.04350203);
   VbbHcc_both_H_dR_stack_1->SetBinError(6,0.04583014);
   VbbHcc_both_H_dR_stack_1->SetBinError(7,0.05062567);
   VbbHcc_both_H_dR_stack_1->SetBinError(8,0.05408255);
   VbbHcc_both_H_dR_stack_1->SetBinError(9,0.05727508);
   VbbHcc_both_H_dR_stack_1->SetBinError(10,0.05520239);
   VbbHcc_both_H_dR_stack_1->SetBinError(11,0.056625);
   VbbHcc_both_H_dR_stack_1->SetBinError(12,0.05439964);
   VbbHcc_both_H_dR_stack_1->SetBinError(13,0.05518434);
   VbbHcc_both_H_dR_stack_1->SetBinError(14,0.05701334);
   VbbHcc_both_H_dR_stack_1->SetBinError(15,0.05477616);
   VbbHcc_both_H_dR_stack_1->SetBinError(16,0.05933142);
   VbbHcc_both_H_dR_stack_1->SetBinError(17,0.03937428);
   VbbHcc_both_H_dR_stack_1->SetBinError(18,0.02701446);
   VbbHcc_both_H_dR_stack_1->SetBinError(19,0.02016124);
   VbbHcc_both_H_dR_stack_1->SetBinError(20,0.01470964);
   VbbHcc_both_H_dR_stack_1->SetBinError(21,0.01323397);
   VbbHcc_both_H_dR_stack_1->SetBinError(22,0.01108965);
   VbbHcc_both_H_dR_stack_1->SetBinError(23,0.006523386);
   VbbHcc_both_H_dR_stack_1->SetBinError(24,0.004724899);
   VbbHcc_both_H_dR_stack_1->SetBinError(25,0.002496094);
   VbbHcc_both_H_dR_stack_1->SetBinError(26,0.003364363);
   VbbHcc_both_H_dR_stack_1->SetBinError(27,0.002177811);
   VbbHcc_both_H_dR_stack_1->SetEntries(6741);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_1,"");
   
   TH1D *VbbHcc_both_H_dR_stack_2 = new TH1D("VbbHcc_both_H_dR_stack_2","",30,0,6);
   VbbHcc_both_H_dR_stack_2->SetBinContent(3,0.1193244);
   VbbHcc_both_H_dR_stack_2->SetBinContent(4,0.2122744);
   VbbHcc_both_H_dR_stack_2->SetBinContent(5,0.2593939);
   VbbHcc_both_H_dR_stack_2->SetBinContent(6,0.357702);
   VbbHcc_both_H_dR_stack_2->SetBinContent(7,0.4152762);
   VbbHcc_both_H_dR_stack_2->SetBinContent(8,0.4487568);
   VbbHcc_both_H_dR_stack_2->SetBinContent(9,0.3668506);
   VbbHcc_both_H_dR_stack_2->SetBinContent(10,0.3495604);
   VbbHcc_both_H_dR_stack_2->SetBinContent(11,0.3140045);
   VbbHcc_both_H_dR_stack_2->SetBinContent(12,0.3000407);
   VbbHcc_both_H_dR_stack_2->SetBinContent(13,0.3072341);
   VbbHcc_both_H_dR_stack_2->SetBinContent(14,0.3114983);
   VbbHcc_both_H_dR_stack_2->SetBinContent(15,0.3426944);
   VbbHcc_both_H_dR_stack_2->SetBinContent(16,0.3083117);
   VbbHcc_both_H_dR_stack_2->SetBinContent(17,0.1676684);
   VbbHcc_both_H_dR_stack_2->SetBinContent(18,0.1004108);
   VbbHcc_both_H_dR_stack_2->SetBinContent(19,0.06306343);
   VbbHcc_both_H_dR_stack_2->SetBinContent(20,0.03797919);
   VbbHcc_both_H_dR_stack_2->SetBinContent(21,0.03062754);
   VbbHcc_both_H_dR_stack_2->SetBinContent(22,0.01726766);
   VbbHcc_both_H_dR_stack_2->SetBinContent(23,0.01133866);
   VbbHcc_both_H_dR_stack_2->SetBinContent(24,0.009649612);
   VbbHcc_both_H_dR_stack_2->SetBinContent(25,0.00290859);
   VbbHcc_both_H_dR_stack_2->SetBinContent(26,0.00206046);
   VbbHcc_both_H_dR_stack_2->SetBinContent(27,0.001561402);
   VbbHcc_both_H_dR_stack_2->SetBinError(3,0.006901933);
   VbbHcc_both_H_dR_stack_2->SetBinError(4,0.008967495);
   VbbHcc_both_H_dR_stack_2->SetBinError(5,0.009975632);
   VbbHcc_both_H_dR_stack_2->SetBinError(6,0.01171964);
   VbbHcc_both_H_dR_stack_2->SetBinError(7,0.01267874);
   VbbHcc_both_H_dR_stack_2->SetBinError(8,0.01323172);
   VbbHcc_both_H_dR_stack_2->SetBinError(9,0.01180574);
   VbbHcc_both_H_dR_stack_2->SetBinError(10,0.01154832);
   VbbHcc_both_H_dR_stack_2->SetBinError(11,0.01090123);
   VbbHcc_both_H_dR_stack_2->SetBinError(12,0.01070267);
   VbbHcc_both_H_dR_stack_2->SetBinError(13,0.01085724);
   VbbHcc_both_H_dR_stack_2->SetBinError(14,0.01090038);
   VbbHcc_both_H_dR_stack_2->SetBinError(15,0.01148379);
   VbbHcc_both_H_dR_stack_2->SetBinError(16,0.01088723);
   VbbHcc_both_H_dR_stack_2->SetBinError(17,0.007876407);
   VbbHcc_both_H_dR_stack_2->SetBinError(18,0.006102225);
   VbbHcc_both_H_dR_stack_2->SetBinError(19,0.004892932);
   VbbHcc_both_H_dR_stack_2->SetBinError(20,0.003743014);
   VbbHcc_both_H_dR_stack_2->SetBinError(21,0.003399247);
   VbbHcc_both_H_dR_stack_2->SetBinError(22,0.002506973);
   VbbHcc_both_H_dR_stack_2->SetBinError(23,0.002061218);
   VbbHcc_both_H_dR_stack_2->SetBinError(24,0.001936253);
   VbbHcc_both_H_dR_stack_2->SetBinError(25,0.0009866381);
   VbbHcc_both_H_dR_stack_2->SetBinError(26,0.0008111493);
   VbbHcc_both_H_dR_stack_2->SetBinError(27,0.0009519386);
   VbbHcc_both_H_dR_stack_2->SetEntries(14243);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_both_18->Modified();
   H_dR_both_18->cd();
   H_dR_both_18->SetSelected(H_dR_both_18);
}
