#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj1_algo_16_logY()
{
//=========Macro generated from canvas: H_dR_Bj1_algo_16/H_dR_Bj1_algo_16
//=========  (Thu Mar  9 13:18:02 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj1_algo_16 = new TCanvas("H_dR_Bj1_algo_16", "H_dR_Bj1_algo_16",0,0,600,600);
   H_dR_Bj1_algo_16->SetHighLightColor(2);
   H_dR_Bj1_algo_16->Range(-1.310117,-0.2055707,7.029799,5.863883);
   H_dR_Bj1_algo_16->SetFillColor(0);
   H_dR_Bj1_algo_16->SetFillStyle(4000);
   H_dR_Bj1_algo_16->SetBorderMode(0);
   H_dR_Bj1_algo_16->SetBorderSize(2);
   H_dR_Bj1_algo_16->SetLogy();
   H_dR_Bj1_algo_16->SetLeftMargin(0.15709);
   H_dR_Bj1_algo_16->SetRightMargin(0.1234783);
   H_dR_Bj1_algo_16->SetBottomMargin(0.12);
   H_dR_Bj1_algo_16->SetFrameFillStyle(1000);
   H_dR_Bj1_algo_16->SetFrameBorderMode(0);
   H_dR_Bj1_algo_16->SetFrameFillStyle(1000);
   H_dR_Bj1_algo_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(100366.5);
   
   TH1F *st_stack_109 = new TH1F("st_stack_109","",30,0,6);
   st_stack_109->SetMinimum(3.332451);
   st_stack_109->SetMaximum(180691.5);
   st_stack_109->SetDirectory(0);
   st_stack_109->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_109->SetLineColor(ci);
   st_stack_109->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   st_stack_109->GetXaxis()->SetRange(1,30);
   st_stack_109->GetXaxis()->SetLabelFont(42);
   st_stack_109->GetXaxis()->SetTitleOffset(1);
   st_stack_109->GetXaxis()->SetTitleFont(42);
   st_stack_109->GetYaxis()->SetTitle("Event/0.2");
   st_stack_109->GetYaxis()->SetLabelFont(42);
   st_stack_109->GetYaxis()->SetTitleSize(0.037);
   st_stack_109->GetYaxis()->SetTitleFont(42);
   st_stack_109->GetZaxis()->SetLabelFont(42);
   st_stack_109->GetZaxis()->SetTitleOffset(1);
   st_stack_109->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_109);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(2,58181.24);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(3,79466.78);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(4,69423.14);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(5,60825.18);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(6,76273.53);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(7,79277.98);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(8,51533.42);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(9,44716.52);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(10,43004.13);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(11,36677.52);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(12,40867.9);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(13,33332.73);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(14,32089.04);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(15,29866.73);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(16,28085.91);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(17,20080.15);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(18,11765.66);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(19,6068.134);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(20,4222.566);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(21,3215.974);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(22,3896.56);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(23,2300.411);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(24,1653.085);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(25,435.944);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(26,50.01028);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(27,38.99927);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(28,306.5632);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(2,6065.725);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(3,6855.375);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(4,6855.446);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(5,5921.931);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(6,21127.91);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(7,21277.91);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(8,5590.213);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(9,5099.345);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(10,4370.75);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(11,3972.088);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(12,5145.339);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(13,3556.028);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(14,3521.958);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(15,2920.577);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(16,2890.805);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(17,2948.224);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(18,1442.779);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(19,1020.435);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(20,806.2233);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(21,748.6363);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(22,1599.928);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(23,1473.719);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(24,1420.166);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(25,282.8667);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(26,27.01404);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(27,25.62493);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(28,278.5466);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetEntries(22714);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_2 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(1,0.5937696);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(2,1326.885);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(3,3837.377);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(4,4610.289);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(5,4411.187);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(6,4009.752);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(7,3632.282);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(8,3238.35);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(9,2839.946);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(10,2498.822);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(11,2224.042);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(12,2015.414);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(13,1859.603);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(14,1745.826);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(15,1668.056);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(16,1527.759);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(17,949.8535);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(18,648.5491);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(19,421.0743);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(20,278.7301);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(21,179.1071);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(22,106.1554);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(23,56.27928);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(24,34.56632);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(25,15.20225);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(26,8.589659);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(27,3.649521);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(28,1.896144);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(29,0.8312774);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(30,0.3301595);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(31,0.5637482);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(1,0.1910143);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(2,8.956995);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(3,15.3384);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(4,16.92334);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(5,16.6606);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(6,15.91854);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(7,15.14743);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(8,14.2608);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(9,13.339);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(10,12.48517);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(11,11.75051);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(12,11.16803);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(13,10.71531);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(14,10.36873);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(15,10.12682);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(16,9.687916);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(17,7.629936);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(18,6.306432);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(19,5.06479);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(20,4.122109);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(21,3.301498);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(22,2.538388);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(23,1.852694);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(24,1.454234);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(25,0.9608097);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(26,0.7295944);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(27,0.4691956);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(28,0.345968);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(29,0.2260112);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(30,0.148979);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(31,0.1993151);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetEntries(736178);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_H_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj1_algo_16->Modified();
   H_dR_Bj1_algo_16->cd();
   H_dR_Bj1_algo_16->SetSelected(H_dR_Bj1_algo_16);
}
