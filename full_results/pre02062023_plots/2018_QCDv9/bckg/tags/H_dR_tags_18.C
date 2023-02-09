#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_tags_18()
{
//=========Macro generated from canvas: H_dR_tags_18/H_dR_tags_18
//=========  (Wed Jan 18 11:43:10 2023) by ROOT version 6.26/06
   TCanvas *H_dR_tags_18 = new TCanvas("H_dR_tags_18", "H_dR_tags_18",0,0,600,600);
   H_dR_tags_18->SetHighLightColor(2);
   H_dR_tags_18->Range(-1.353788,-2022249,7.264125,1.482983e+07);
   H_dR_tags_18->SetFillColor(0);
   H_dR_tags_18->SetFillStyle(4000);
   H_dR_tags_18->SetBorderMode(0);
   H_dR_tags_18->SetBorderSize(2);
   H_dR_tags_18->SetLeftMargin(0.15709);
   H_dR_tags_18->SetRightMargin(0.1234783);
   H_dR_tags_18->SetBottomMargin(0.12);
   H_dR_tags_18->SetFrameFillStyle(1000);
   H_dR_tags_18->SetFrameBorderMode(0);
   H_dR_tags_18->SetFrameFillStyle(1000);
   H_dR_tags_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.314462e+07);
   
   TH1F *st_stack_23 = new TH1F("st_stack_23","",30,0,6);
   st_stack_23->SetMinimum(0);
   st_stack_23->SetMaximum(1.314462e+07);
   st_stack_23->SetDirectory(0);
   st_stack_23->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_23->SetLineColor(ci);
   st_stack_23->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_23->GetXaxis()->SetRange(1,31);
   st_stack_23->GetXaxis()->SetLabelFont(42);
   st_stack_23->GetXaxis()->SetTitleOffset(1);
   st_stack_23->GetXaxis()->SetTitleFont(42);
   st_stack_23->GetYaxis()->SetTitle("Events/0.2");
   st_stack_23->GetYaxis()->SetLabelFont(42);
   st_stack_23->GetYaxis()->SetTitleSize(0.037);
   st_stack_23->GetYaxis()->SetTitleFont(42);
   st_stack_23->GetZaxis()->SetLabelFont(42);
   st_stack_23->GetZaxis()->SetTitleOffset(1);
   st_stack_23->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_23);
   
   
   TH1D *VbbHcc_tags_H_dR_stack_1 = new TH1D("VbbHcc_tags_H_dR_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(2,761.52);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(3,3015854);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(4,3987850);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(5,3420274);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(6,3197498);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(7,3359178);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(8,3538818);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(9,3685775);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(10,4018239);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(11,4476521);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(12,5241001);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(13,5845927);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(14,6601534);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(15,7568310);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(16,8387273);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(17,5372976);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(18,3813729);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(19,3388867);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(20,2618810);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(21,1725462);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(22,1537596);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(23,1018945);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(24,638587.2);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(25,491961.5);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(26,325997.4);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(27,161478.2);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(28,20234.18);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(29,1704.418);
   VbbHcc_tags_H_dR_stack_1->SetBinError(2,553.089);
   VbbHcc_tags_H_dR_stack_1->SetBinError(3,124813);
   VbbHcc_tags_H_dR_stack_1->SetBinError(4,201388.7);
   VbbHcc_tags_H_dR_stack_1->SetBinError(5,171105.5);
   VbbHcc_tags_H_dR_stack_1->SetBinError(6,174314.9);
   VbbHcc_tags_H_dR_stack_1->SetBinError(7,178874.5);
   VbbHcc_tags_H_dR_stack_1->SetBinError(8,172658.9);
   VbbHcc_tags_H_dR_stack_1->SetBinError(9,186394);
   VbbHcc_tags_H_dR_stack_1->SetBinError(10,181999.7);
   VbbHcc_tags_H_dR_stack_1->SetBinError(11,210136.1);
   VbbHcc_tags_H_dR_stack_1->SetBinError(12,235069.1);
   VbbHcc_tags_H_dR_stack_1->SetBinError(13,245786.1);
   VbbHcc_tags_H_dR_stack_1->SetBinError(14,251468.4);
   VbbHcc_tags_H_dR_stack_1->SetBinError(15,272992.9);
   VbbHcc_tags_H_dR_stack_1->SetBinError(16,300966.3);
   VbbHcc_tags_H_dR_stack_1->SetBinError(17,231531.2);
   VbbHcc_tags_H_dR_stack_1->SetBinError(18,185596.4);
   VbbHcc_tags_H_dR_stack_1->SetBinError(19,216414);
   VbbHcc_tags_H_dR_stack_1->SetBinError(20,167579.7);
   VbbHcc_tags_H_dR_stack_1->SetBinError(21,123711.4);
   VbbHcc_tags_H_dR_stack_1->SetBinError(22,129723.9);
   VbbHcc_tags_H_dR_stack_1->SetBinError(23,96441.38);
   VbbHcc_tags_H_dR_stack_1->SetBinError(24,78703.16);
   VbbHcc_tags_H_dR_stack_1->SetBinError(25,77636.41);
   VbbHcc_tags_H_dR_stack_1->SetBinError(26,91922.36);
   VbbHcc_tags_H_dR_stack_1->SetBinError(27,53571.85);
   VbbHcc_tags_H_dR_stack_1->SetBinError(28,4913.691);
   VbbHcc_tags_H_dR_stack_1->SetBinError(29,759.8769);
   VbbHcc_tags_H_dR_stack_1->SetEntries(502767);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_2 = new TH1D("VbbHcc_tags_H_dR_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(2,81.90619);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(3,90249.23);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(4,160748.9);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(5,195912.6);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(6,235370.9);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(7,257297.4);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(8,265441.2);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(9,267902.8);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(10,273765.2);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(11,285378.8);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(12,304148.4);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(13,327555.6);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(14,354014);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(15,379601.5);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(16,375806.4);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(17,214873);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(18,137457);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(19,92333.44);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(20,62707.21);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(21,42183.1);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(22,27754.96);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(23,17664.81);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(24,10615.64);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(25,5707.825);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(26,2820.254);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(27,1169.644);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(28,319.2504);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(29,23.40595);
   VbbHcc_tags_H_dR_stack_2->SetBinError(2,4.810308);
   VbbHcc_tags_H_dR_stack_2->SetBinError(3,96.42177);
   VbbHcc_tags_H_dR_stack_2->SetBinError(4,127.4172);
   VbbHcc_tags_H_dR_stack_2->SetBinError(5,141.0685);
   VbbHcc_tags_H_dR_stack_2->SetBinError(6,153.9153);
   VbbHcc_tags_H_dR_stack_2->SetBinError(7,160.6643);
   VbbHcc_tags_H_dR_stack_2->SetBinError(8,164.8303);
   VbbHcc_tags_H_dR_stack_2->SetBinError(9,164.2958);
   VbbHcc_tags_H_dR_stack_2->SetBinError(10,167.2276);
   VbbHcc_tags_H_dR_stack_2->SetBinError(11,170.3306);
   VbbHcc_tags_H_dR_stack_2->SetBinError(12,175.4467);
   VbbHcc_tags_H_dR_stack_2->SetBinError(13,182.3599);
   VbbHcc_tags_H_dR_stack_2->SetBinError(14,189.9097);
   VbbHcc_tags_H_dR_stack_2->SetBinError(15,196.8333);
   VbbHcc_tags_H_dR_stack_2->SetBinError(16,195.7042);
   VbbHcc_tags_H_dR_stack_2->SetBinError(17,148.1759);
   VbbHcc_tags_H_dR_stack_2->SetBinError(18,118.6797);
   VbbHcc_tags_H_dR_stack_2->SetBinError(19,96.52751);
   VbbHcc_tags_H_dR_stack_2->SetBinError(20,79.0547);
   VbbHcc_tags_H_dR_stack_2->SetBinError(21,63.85522);
   VbbHcc_tags_H_dR_stack_2->SetBinError(22,52.69769);
   VbbHcc_tags_H_dR_stack_2->SetBinError(23,41.38292);
   VbbHcc_tags_H_dR_stack_2->SetBinError(24,32.09539);
   VbbHcc_tags_H_dR_stack_2->SetBinError(25,22.94782);
   VbbHcc_tags_H_dR_stack_2->SetBinError(26,16.47156);
   VbbHcc_tags_H_dR_stack_2->SetBinError(27,10.3719);
   VbbHcc_tags_H_dR_stack_2->SetBinError(28,6.036149);
   VbbHcc_tags_H_dR_stack_2->SetBinError(29,1.428102);
   VbbHcc_tags_H_dR_stack_2->SetEntries(5.371604e+07);

   ci = TColor::GetColor("#990099");
   VbbHcc_tags_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_tags_18->Modified();
   H_dR_tags_18->cd();
   H_dR_tags_18->SetSelected(H_dR_tags_18);
}
