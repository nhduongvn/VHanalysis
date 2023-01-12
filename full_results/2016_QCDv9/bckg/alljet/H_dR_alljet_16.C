#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_alljet_16()
{
//=========Macro generated from canvas: H_dR_alljet_16/H_dR_alljet_16
//=========  (Mon Dec 19 11:11:48 2022) by ROOT version 6.26/06
   TCanvas *H_dR_alljet_16 = new TCanvas("H_dR_alljet_16", "H_dR_alljet_16",0,0,600,600);
   H_dR_alljet_16->SetHighLightColor(2);
   H_dR_alljet_16->Range(-1.353788,-2.574826e+10,7.264125,1.888206e+11);
   H_dR_alljet_16->SetFillColor(0);
   H_dR_alljet_16->SetFillStyle(4000);
   H_dR_alljet_16->SetBorderMode(0);
   H_dR_alljet_16->SetBorderSize(2);
   H_dR_alljet_16->SetLeftMargin(0.15709);
   H_dR_alljet_16->SetRightMargin(0.1234783);
   H_dR_alljet_16->SetBottomMargin(0.12);
   H_dR_alljet_16->SetFrameFillStyle(1000);
   H_dR_alljet_16->SetFrameBorderMode(0);
   H_dR_alljet_16->SetFrameFillStyle(1000);
   H_dR_alljet_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.673637e+11);
   
   TH1F *st_stack_189 = new TH1F("st_stack_189","",30,0,6);
   st_stack_189->SetMinimum(0);
   st_stack_189->SetMaximum(1.673637e+11);
   st_stack_189->SetDirectory(0);
   st_stack_189->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_189->SetLineColor(ci);
   st_stack_189->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_189->GetXaxis()->SetRange(1,31);
   st_stack_189->GetXaxis()->SetLabelFont(42);
   st_stack_189->GetXaxis()->SetTitleOffset(1);
   st_stack_189->GetXaxis()->SetTitleFont(42);
   st_stack_189->GetYaxis()->SetTitle("Events/0.2");
   st_stack_189->GetYaxis()->SetLabelFont(42);
   st_stack_189->GetYaxis()->SetTitleSize(0.037);
   st_stack_189->GetYaxis()->SetTitleFont(42);
   st_stack_189->GetZaxis()->SetLabelFont(42);
   st_stack_189->GetZaxis()->SetTitleOffset(1);
   st_stack_189->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_189);
   
   
   TH1D *VbbHcc_alljet_H_dR_stack_1 = new TH1D("VbbHcc_alljet_H_dR_stack_1","",30,0,6);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(2,4485379);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(3,2.307845e+09);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(4,4.499878e+09);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(5,3.895779e+09);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(6,4.291835e+09);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(7,5.028808e+09);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(8,6.182093e+09);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(9,7.959121e+09);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(10,1.081947e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(11,1.541568e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(12,2.275487e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(13,3.450087e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(14,5.25819e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(15,8.000787e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(16,1.115715e+11);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(17,7.69538e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(18,5.811954e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(19,4.639726e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(20,3.767493e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(21,3.086236e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(22,2.537091e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(23,2.092897e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(24,1.726369e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(25,1.42253e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(26,1.169762e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(27,9.611239e+09);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(28,7.887376e+09);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(29,6.470279e+09);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(30,5.27971e+09);
   VbbHcc_alljet_H_dR_stack_1->SetBinContent(31,1.991061e+10);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(2,284414.6);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(3,6425467);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(4,9036564);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(5,8411732);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(6,8827304);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(7,9543988);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(8,1.056809e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(9,1.196246e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(10,1.390331e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(11,1.652937e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(12,1.998999e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(13,2.449687e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(14,3.008715e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(15,3.689592e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(16,4.335086e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(17,3.609033e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(18,3.144611e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(19,2.816368e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(20,2.543539e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(21,2.306905e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(22,2.09632e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(23,1.907975e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(24,1.736779e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(25,1.57967e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(26,1.435142e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(27,1.303386e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(28,1.182783e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(29,1.073151e+07);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(30,9714694);
   VbbHcc_alljet_H_dR_stack_1->SetBinError(31,1.898878e+07);
   VbbHcc_alljet_H_dR_stack_1->SetEntries(2.046832e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_alljet_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_alljet_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_alljet_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_H_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_H_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_H_dR_stack_1,"");
   
   TH1D *VbbHcc_alljet_H_dR_stack_2 = new TH1D("VbbHcc_alljet_H_dR_stack_2","",30,0,6);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(2,149.7079);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(3,137907.3);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(4,322065);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(5,469021.4);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(6,610727);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(7,728935.5);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(8,844758.8);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(9,996148.7);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(10,1214581);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(11,1526800);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(12,1960980);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(13,2536994);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(14,3246253);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(15,4022779);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(16,4350769);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(17,2326466);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(18,1400274);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(19,909180.1);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(20,606427.5);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(21,410778.4);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(22,282314);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(23,195654.1);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(24,136468);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(25,95783.55);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(26,67569.37);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(27,47690.67);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(28,33553.95);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(29,23437.27);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(30,16282.52);
   VbbHcc_alljet_H_dR_stack_2->SetBinContent(31,33220.71);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(2,3.160515);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(3,97.95377);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(4,150.1361);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(5,180.6744);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(6,205.3657);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(7,223.9634);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(8,241.2601);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(9,262.7248);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(10,291.4628);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(11,328.5239);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(12,374.3562);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(13,427.9539);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(14,486.2634);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(15,543.2849);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(16,566.2304);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(17,412.881);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(18,319.1305);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(19,256.1224);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(20,208.2099);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(21,170.505);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(22,140.6546);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(23,116.4793);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(24,96.81858);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(25,80.76668);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(26,67.58233);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(27,56.60691);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(28,47.34095);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(29,39.49851);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(30,32.85397);
   VbbHcc_alljet_H_dR_stack_2->SetBinError(31,46.55224);
   VbbHcc_alljet_H_dR_stack_2->SetEntries(4.61215e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_alljet_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_alljet_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_alljet_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_H_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_H_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_H_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_alljet_H_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_alljet_H_dR_stack_1","QCD","F");

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
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_alljet_16->Modified();
   H_dR_alljet_16->cd();
   H_dR_alljet_16->SetSelected(H_dR_alljet_16);
}
