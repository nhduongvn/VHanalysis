#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_algo_17_logY()
{
//=========Macro generated from canvas: H_dR_algo_17/H_dR_algo_17
//=========  (Thu Feb 16 10:37:39 2023) by ROOT version 6.26/06
   TCanvas *H_dR_algo_17 = new TCanvas("H_dR_algo_17", "H_dR_algo_17",0,0,600,600);
   H_dR_algo_17->SetHighLightColor(2);
   H_dR_algo_17->Range(-1.353788,-0.6689763,7.264125,8.224973);
   H_dR_algo_17->SetFillColor(0);
   H_dR_algo_17->SetFillStyle(4000);
   H_dR_algo_17->SetBorderMode(0);
   H_dR_algo_17->SetBorderSize(2);
   H_dR_algo_17->SetLogy();
   H_dR_algo_17->SetLeftMargin(0.15709);
   H_dR_algo_17->SetRightMargin(0.1234783);
   H_dR_algo_17->SetBottomMargin(0.12);
   H_dR_algo_17->SetFrameFillStyle(1000);
   H_dR_algo_17->SetFrameBorderMode(0);
   H_dR_algo_17->SetFrameFillStyle(1000);
   H_dR_algo_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(9849523);
   
   TH1F *st_stack_86 = new TH1F("st_stack_86","",30,0,6);
   st_stack_86->SetMinimum(2.502059);
   st_stack_86->SetMaximum(2.165598e+07);
   st_stack_86->SetDirectory(0);
   st_stack_86->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_86->SetLineColor(ci);
   st_stack_86->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_86->GetXaxis()->SetRange(1,31);
   st_stack_86->GetXaxis()->SetLabelFont(42);
   st_stack_86->GetXaxis()->SetTitleOffset(1);
   st_stack_86->GetXaxis()->SetTitleFont(42);
   st_stack_86->GetYaxis()->SetTitle("Events/0.2");
   st_stack_86->GetYaxis()->SetLabelFont(42);
   st_stack_86->GetYaxis()->SetTitleSize(0.037);
   st_stack_86->GetYaxis()->SetTitleFont(42);
   st_stack_86->GetZaxis()->SetLabelFont(42);
   st_stack_86->GetZaxis()->SetTitleOffset(1);
   st_stack_86->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_86);
   
   
   TH1D *VbbHcc_algo_H_dR_stack_1 = new TH1D("VbbHcc_algo_H_dR_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(3,66698.65);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(4,71074.3);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(5,54578.79);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(6,68216.01);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(7,59466.22);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(8,64294.14);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(9,88902.83);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(10,90777.2);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(11,90683.8);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(12,90055.97);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(13,80046.52);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(14,79225.57);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(15,84029.92);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(16,94028.74);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(17,43662.7);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(18,52261.63);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(19,17931.41);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(20,10969.54);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(21,7535.961);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(22,1121.606);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(23,985.2012);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(24,154.2521);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(25,46.76527);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(26,349.4697);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(27,18.1623);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(28,4.093967);
   VbbHcc_algo_H_dR_stack_1->SetBinError(3,5831.265);
   VbbHcc_algo_H_dR_stack_1->SetBinError(4,6791.543);
   VbbHcc_algo_H_dR_stack_1->SetBinError(5,5419.086);
   VbbHcc_algo_H_dR_stack_1->SetBinError(6,6875.825);
   VbbHcc_algo_H_dR_stack_1->SetBinError(7,5810.281);
   VbbHcc_algo_H_dR_stack_1->SetBinError(8,6329.875);
   VbbHcc_algo_H_dR_stack_1->SetBinError(9,18688.41);
   VbbHcc_algo_H_dR_stack_1->SetBinError(10,21243.98);
   VbbHcc_algo_H_dR_stack_1->SetBinError(11,20218.04);
   VbbHcc_algo_H_dR_stack_1->SetBinError(12,19359.67);
   VbbHcc_algo_H_dR_stack_1->SetBinError(13,6812.726);
   VbbHcc_algo_H_dR_stack_1->SetBinError(14,6567.969);
   VbbHcc_algo_H_dR_stack_1->SetBinError(15,6718.75);
   VbbHcc_algo_H_dR_stack_1->SetBinError(16,23275.09);
   VbbHcc_algo_H_dR_stack_1->SetBinError(17,4579.268);
   VbbHcc_algo_H_dR_stack_1->SetBinError(18,19116.64);
   VbbHcc_algo_H_dR_stack_1->SetBinError(19,3157.597);
   VbbHcc_algo_H_dR_stack_1->SetBinError(20,2122.055);
   VbbHcc_algo_H_dR_stack_1->SetBinError(21,2460.815);
   VbbHcc_algo_H_dR_stack_1->SetBinError(22,243.7884);
   VbbHcc_algo_H_dR_stack_1->SetBinError(23,348.7753);
   VbbHcc_algo_H_dR_stack_1->SetBinError(24,51.31949);
   VbbHcc_algo_H_dR_stack_1->SetBinError(25,25.87466);
   VbbHcc_algo_H_dR_stack_1->SetBinError(26,295.4758);
   VbbHcc_algo_H_dR_stack_1->SetBinError(27,12.86716);
   VbbHcc_algo_H_dR_stack_1->SetBinError(28,4.093967);
   VbbHcc_algo_H_dR_stack_1->SetEntries(24778);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_2 = new TH1D("VbbHcc_algo_H_dR_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(2,0.777259);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(3,1538.632);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(4,3071.37);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(5,3780.932);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(6,4274.012);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(7,4480.449);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(8,4531.767);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(9,4664.758);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(10,4813.866);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(11,5043.155);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(12,5285.508);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(13,5384.893);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(14,5186.491);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(15,4939.434);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(16,4466.494);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(17,2684.397);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(18,1637.255);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(19,987.1416);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(20,578.4783);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(21,328.9566);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(22,165.8337);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(23,86.14615);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(24,36.41056);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(25,13.76739);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(26,3.808784);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(27,1.398288);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(28,0.08287488);
   VbbHcc_algo_H_dR_stack_2->SetBinError(2,0.2559286);
   VbbHcc_algo_H_dR_stack_2->SetBinError(3,10.56259);
   VbbHcc_algo_H_dR_stack_2->SetBinError(4,14.951);
   VbbHcc_algo_H_dR_stack_2->SetBinError(5,16.64535);
   VbbHcc_algo_H_dR_stack_2->SetBinError(6,17.73982);
   VbbHcc_algo_H_dR_stack_2->SetBinError(7,18.23819);
   VbbHcc_algo_H_dR_stack_2->SetBinError(8,18.40314);
   VbbHcc_algo_H_dR_stack_2->SetBinError(9,18.69853);
   VbbHcc_algo_H_dR_stack_2->SetBinError(10,18.98323);
   VbbHcc_algo_H_dR_stack_2->SetBinError(11,19.40653);
   VbbHcc_algo_H_dR_stack_2->SetBinError(12,19.83214);
   VbbHcc_algo_H_dR_stack_2->SetBinError(13,20.01358);
   VbbHcc_algo_H_dR_stack_2->SetBinError(14,19.59838);
   VbbHcc_algo_H_dR_stack_2->SetBinError(15,19.0751);
   VbbHcc_algo_H_dR_stack_2->SetBinError(16,18.09381);
   VbbHcc_algo_H_dR_stack_2->SetBinError(17,13.96439);
   VbbHcc_algo_H_dR_stack_2->SetBinError(18,10.85796);
   VbbHcc_algo_H_dR_stack_2->SetBinError(19,8.383412);
   VbbHcc_algo_H_dR_stack_2->SetBinError(20,6.378213);
   VbbHcc_algo_H_dR_stack_2->SetBinError(21,4.783527);
   VbbHcc_algo_H_dR_stack_2->SetBinError(22,3.372538);
   VbbHcc_algo_H_dR_stack_2->SetBinError(23,2.410193);
   VbbHcc_algo_H_dR_stack_2->SetBinError(24,1.546658);
   VbbHcc_algo_H_dR_stack_2->SetBinError(25,0.945934);
   VbbHcc_algo_H_dR_stack_2->SetBinError(26,0.491244);
   VbbHcc_algo_H_dR_stack_2->SetBinError(27,0.3067973);
   VbbHcc_algo_H_dR_stack_2->SetBinError(28,0.0588124);
   VbbHcc_algo_H_dR_stack_2->SetEntries(1015007);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_1","QCD","F");

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
   H_dR_algo_17->Modified();
   H_dR_algo_17->cd();
   H_dR_algo_17->SetSelected(H_dR_algo_17);
}
