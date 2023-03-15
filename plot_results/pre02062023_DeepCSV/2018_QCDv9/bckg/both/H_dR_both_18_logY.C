#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_both_18_logY()
{
//=========Macro generated from canvas: H_dR_both_18/H_dR_both_18
//=========  (Wed Jan 18 11:42:53 2023) by ROOT version 6.26/06
   TCanvas *H_dR_both_18 = new TCanvas("H_dR_both_18", "H_dR_both_18",0,0,600,600);
   H_dR_both_18->SetHighLightColor(2);
   H_dR_both_18->Range(-1.353788,-1.091548,7.264125,10.52985);
   H_dR_both_18->SetFillColor(0);
   H_dR_both_18->SetFillStyle(4000);
   H_dR_both_18->SetBorderMode(0);
   H_dR_both_18->SetBorderSize(2);
   H_dR_both_18->SetLogy();
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
   st->SetMinimum(10);
   st->SetMaximum(9.000577e+08);
   
   TH1F *st_stack_151 = new TH1F("st_stack_151","",30,0,6);
   st_stack_151->SetMinimum(2.009188);
   st_stack_151->SetMaximum(2.331918e+09);
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
   VbbHcc_both_H_dR_stack_1->SetBinContent(2,761.52);
   VbbHcc_both_H_dR_stack_1->SetBinContent(3,3110484);
   VbbHcc_both_H_dR_stack_1->SetBinContent(4,4062627);
   VbbHcc_both_H_dR_stack_1->SetBinContent(5,3531863);
   VbbHcc_both_H_dR_stack_1->SetBinContent(6,3253377);
   VbbHcc_both_H_dR_stack_1->SetBinContent(7,3480952);
   VbbHcc_both_H_dR_stack_1->SetBinContent(8,3602189);
   VbbHcc_both_H_dR_stack_1->SetBinContent(9,3740218);
   VbbHcc_both_H_dR_stack_1->SetBinContent(10,4077921);
   VbbHcc_both_H_dR_stack_1->SetBinContent(11,4675833);
   VbbHcc_both_H_dR_stack_1->SetBinContent(12,5359552);
   VbbHcc_both_H_dR_stack_1->SetBinContent(13,5978677);
   VbbHcc_both_H_dR_stack_1->SetBinContent(14,6741313);
   VbbHcc_both_H_dR_stack_1->SetBinContent(15,7824237);
   VbbHcc_both_H_dR_stack_1->SetBinContent(16,8610051);
   VbbHcc_both_H_dR_stack_1->SetBinContent(17,5519700);
   VbbHcc_both_H_dR_stack_1->SetBinContent(18,3917164);
   VbbHcc_both_H_dR_stack_1->SetBinContent(19,3510213);
   VbbHcc_both_H_dR_stack_1->SetBinContent(20,2697247);
   VbbHcc_both_H_dR_stack_1->SetBinContent(21,1722844);
   VbbHcc_both_H_dR_stack_1->SetBinContent(22,1554593);
   VbbHcc_both_H_dR_stack_1->SetBinContent(23,1040397);
   VbbHcc_both_H_dR_stack_1->SetBinContent(24,650469.7);
   VbbHcc_both_H_dR_stack_1->SetBinContent(25,520739.3);
   VbbHcc_both_H_dR_stack_1->SetBinContent(26,329164.4);
   VbbHcc_both_H_dR_stack_1->SetBinContent(27,163193.9);
   VbbHcc_both_H_dR_stack_1->SetBinContent(28,20385.2);
   VbbHcc_both_H_dR_stack_1->SetBinContent(29,1704.418);
   VbbHcc_both_H_dR_stack_1->SetBinError(2,553.089);
   VbbHcc_both_H_dR_stack_1->SetBinError(3,128093.7);
   VbbHcc_both_H_dR_stack_1->SetBinError(4,201584.5);
   VbbHcc_both_H_dR_stack_1->SetBinError(5,174419);
   VbbHcc_both_H_dR_stack_1->SetBinError(6,174469.5);
   VbbHcc_both_H_dR_stack_1->SetBinError(7,181181.6);
   VbbHcc_both_H_dR_stack_1->SetBinError(8,172875.1);
   VbbHcc_both_H_dR_stack_1->SetBinError(9,186172.7);
   VbbHcc_both_H_dR_stack_1->SetBinError(10,181311.5);
   VbbHcc_both_H_dR_stack_1->SetBinError(11,216790);
   VbbHcc_both_H_dR_stack_1->SetBinError(12,236385.2);
   VbbHcc_both_H_dR_stack_1->SetBinError(13,247690.8);
   VbbHcc_both_H_dR_stack_1->SetBinError(14,252902);
   VbbHcc_both_H_dR_stack_1->SetBinError(15,279280.5);
   VbbHcc_both_H_dR_stack_1->SetBinError(16,304597.2);
   VbbHcc_both_H_dR_stack_1->SetBinError(17,234379.8);
   VbbHcc_both_H_dR_stack_1->SetBinError(18,188585.6);
   VbbHcc_both_H_dR_stack_1->SetBinError(19,219707.9);
   VbbHcc_both_H_dR_stack_1->SetBinError(20,170682.2);
   VbbHcc_both_H_dR_stack_1->SetBinError(21,121541.1);
   VbbHcc_both_H_dR_stack_1->SetBinError(22,129784.2);
   VbbHcc_both_H_dR_stack_1->SetBinError(23,96609.84);
   VbbHcc_both_H_dR_stack_1->SetBinError(24,78741.12);
   VbbHcc_both_H_dR_stack_1->SetBinError(25,80308.25);
   VbbHcc_both_H_dR_stack_1->SetBinError(26,91945.71);
   VbbHcc_both_H_dR_stack_1->SetBinError(27,53577.9);
   VbbHcc_both_H_dR_stack_1->SetBinError(28,4914.095);
   VbbHcc_both_H_dR_stack_1->SetBinError(29,759.8769);
   VbbHcc_both_H_dR_stack_1->SetEntries(528827);

   ci = TColor::GetColor("#ff6600");
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
   VbbHcc_both_H_dR_stack_2->SetBinContent(2,85.48937);
   VbbHcc_both_H_dR_stack_2->SetBinContent(3,94757.99);
   VbbHcc_both_H_dR_stack_2->SetBinContent(4,168381.5);
   VbbHcc_both_H_dR_stack_2->SetBinContent(5,204863.5);
   VbbHcc_both_H_dR_stack_2->SetBinContent(6,245838.8);
   VbbHcc_both_H_dR_stack_2->SetBinContent(7,268583.2);
   VbbHcc_both_H_dR_stack_2->SetBinContent(8,277021.1);
   VbbHcc_both_H_dR_stack_2->SetBinContent(9,279735.1);
   VbbHcc_both_H_dR_stack_2->SetBinContent(10,285808.6);
   VbbHcc_both_H_dR_stack_2->SetBinContent(11,297802);
   VbbHcc_both_H_dR_stack_2->SetBinContent(12,317116);
   VbbHcc_both_H_dR_stack_2->SetBinContent(13,341182.2);
   VbbHcc_both_H_dR_stack_2->SetBinContent(14,368405);
   VbbHcc_both_H_dR_stack_2->SetBinContent(15,394686.2);
   VbbHcc_both_H_dR_stack_2->SetBinContent(16,390525.7);
   VbbHcc_both_H_dR_stack_2->SetBinContent(17,223604.7);
   VbbHcc_both_H_dR_stack_2->SetBinContent(18,143166.5);
   VbbHcc_both_H_dR_stack_2->SetBinContent(19,96282.16);
   VbbHcc_both_H_dR_stack_2->SetBinContent(20,65387.91);
   VbbHcc_both_H_dR_stack_2->SetBinContent(21,44058.83);
   VbbHcc_both_H_dR_stack_2->SetBinContent(22,28983.1);
   VbbHcc_both_H_dR_stack_2->SetBinContent(23,18453.71);
   VbbHcc_both_H_dR_stack_2->SetBinContent(24,11093.57);
   VbbHcc_both_H_dR_stack_2->SetBinContent(25,5967.07);
   VbbHcc_both_H_dR_stack_2->SetBinContent(26,2944.459);
   VbbHcc_both_H_dR_stack_2->SetBinContent(27,1221.104);
   VbbHcc_both_H_dR_stack_2->SetBinContent(28,333.6275);
   VbbHcc_both_H_dR_stack_2->SetBinContent(29,24.69493);
   VbbHcc_both_H_dR_stack_2->SetBinError(2,4.84173);
   VbbHcc_both_H_dR_stack_2->SetBinError(3,98.85523);
   VbbHcc_both_H_dR_stack_2->SetBinError(4,130.3938);
   VbbHcc_both_H_dR_stack_2->SetBinError(5,144.2379);
   VbbHcc_both_H_dR_stack_2->SetBinError(6,157.2851);
   VbbHcc_both_H_dR_stack_2->SetBinError(7,164.0732);
   VbbHcc_both_H_dR_stack_2->SetBinError(8,168.1957);
   VbbHcc_both_H_dR_stack_2->SetBinError(9,168.0192);
   VbbHcc_both_H_dR_stack_2->SetBinError(10,170.7804);
   VbbHcc_both_H_dR_stack_2->SetBinError(11,174.0099);
   VbbHcc_both_H_dR_stack_2->SetBinError(12,179.2061);
   VbbHcc_both_H_dR_stack_2->SetBinError(13,185.9668);
   VbbHcc_both_H_dR_stack_2->SetBinError(14,193.7314);
   VbbHcc_both_H_dR_stack_2->SetBinError(15,200.8091);
   VbbHcc_both_H_dR_stack_2->SetBinError(16,199.291);
   VbbHcc_both_H_dR_stack_2->SetBinError(17,151.2134);
   VbbHcc_both_H_dR_stack_2->SetBinError(18,121.0772);
   VbbHcc_both_H_dR_stack_2->SetBinError(19,98.60094);
   VbbHcc_both_H_dR_stack_2->SetBinError(20,80.63281);
   VbbHcc_both_H_dR_stack_2->SetBinError(21,65.52872);
   VbbHcc_both_H_dR_stack_2->SetBinError(22,53.89601);
   VbbHcc_both_H_dR_stack_2->SetBinError(23,42.26498);
   VbbHcc_both_H_dR_stack_2->SetBinError(24,32.7528);
   VbbHcc_both_H_dR_stack_2->SetBinError(25,23.46343);
   VbbHcc_both_H_dR_stack_2->SetBinError(26,16.79995);
   VbbHcc_both_H_dR_stack_2->SetBinError(27,10.58491);
   VbbHcc_both_H_dR_stack_2->SetBinError(28,6.138237);
   VbbHcc_both_H_dR_stack_2->SetBinError(29,1.465963);
   VbbHcc_both_H_dR_stack_2->SetEntries(5.602093e+07);

   ci = TColor::GetColor("#990099");
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
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_1","QCD","F");

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
   H_dR_both_18->Modified();
   H_dR_both_18->cd();
   H_dR_both_18->SetSelected(H_dR_both_18);
}
