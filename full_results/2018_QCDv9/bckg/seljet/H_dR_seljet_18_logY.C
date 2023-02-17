#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_seljet_18_logY()
{
//=========Macro generated from canvas: H_dR_seljet_18/H_dR_seljet_18
//=========  (Thu Feb 16 10:37:42 2023) by ROOT version 6.26/06
   TCanvas *H_dR_seljet_18 = new TCanvas("H_dR_seljet_18", "H_dR_seljet_18",0,0,600,600);
   H_dR_seljet_18->SetHighLightColor(2);
   H_dR_seljet_18->Range(-1.353788,-0.7306417,7.264125,12.62402);
   H_dR_seljet_18->SetFillColor(0);
   H_dR_seljet_18->SetFillStyle(4000);
   H_dR_seljet_18->SetBorderMode(0);
   H_dR_seljet_18->SetBorderSize(2);
   H_dR_seljet_18->SetLogy();
   H_dR_seljet_18->SetLeftMargin(0.15709);
   H_dR_seljet_18->SetRightMargin(0.1234783);
   H_dR_seljet_18->SetBottomMargin(0.12);
   H_dR_seljet_18->SetFrameFillStyle(1000);
   H_dR_seljet_18->SetFrameBorderMode(0);
   H_dR_seljet_18->SetFrameFillStyle(1000);
   H_dR_seljet_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(41.74975);
   st->SetMaximum(6.835998e+10);
   
   TH1F *st_stack_279 = new TH1F("st_stack_279","",30,0,6);
   st_stack_279->SetMinimum(7.445907);
   st_stack_279->SetMaximum(1.943358e+11);
   st_stack_279->SetDirectory(0);
   st_stack_279->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_279->SetLineColor(ci);
   st_stack_279->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_279->GetXaxis()->SetRange(1,31);
   st_stack_279->GetXaxis()->SetLabelFont(42);
   st_stack_279->GetXaxis()->SetTitleOffset(1);
   st_stack_279->GetXaxis()->SetTitleFont(42);
   st_stack_279->GetYaxis()->SetTitle("Events/0.2");
   st_stack_279->GetYaxis()->SetLabelFont(42);
   st_stack_279->GetYaxis()->SetTitleSize(0.037);
   st_stack_279->GetYaxis()->SetTitleFont(42);
   st_stack_279->GetZaxis()->SetLabelFont(42);
   st_stack_279->GetZaxis()->SetTitleOffset(1);
   st_stack_279->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_279);
   
   
   TH1D *VbbHcc_seljet_H_dR_stack_1 = new TH1D("VbbHcc_seljet_H_dR_stack_1","",30,0,6);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(2,41628.76);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(3,3.619969e+07);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(4,4.859335e+07);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(5,4.171497e+07);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(6,4.292962e+07);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(7,4.878892e+07);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(8,5.937044e+07);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(9,7.515427e+07);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(10,1.031121e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(11,1.422433e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(12,2.029464e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(13,2.908246e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(14,4.137986e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(15,5.682208e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(16,6.808958e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(17,4.294853e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(18,2.958679e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(19,2.138736e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(20,1.558459e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(21,1.118659e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(22,7.732893e+07);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(23,5.215802e+07);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(24,3.378318e+07);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(25,1.973024e+07);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(26,1.045266e+07);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(27,4491022);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(28,1201627);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(29,161496.3);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(2,6478.747);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(3,356105.9);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(4,460285.7);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(5,425284.6);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(6,416131.4);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(7,428780.1);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(8,471090.4);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(9,490747.7);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(10,572789.3);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(11,633952);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(12,730422.4);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(13,897470.1);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(14,998003.9);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(15,1135231);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(16,1283698);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(17,1021929);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(18,839427.2);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(19,713708.6);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(20,648967.2);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(21,535183.5);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(22,442309.5);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(23,360868.5);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(24,301905);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(25,228295.1);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(26,173850.4);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(27,116737.1);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(28,55886.02);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(29,43497.03);
   VbbHcc_seljet_H_dR_stack_1->SetEntries(4.358765e+07);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_seljet_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_seljet_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_seljet_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_H_dR_stack_1,"");
   
   TH1D *VbbHcc_seljet_H_dR_stack_2 = new TH1D("VbbHcc_seljet_H_dR_stack_2","",30,0,6);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(2,120.9859);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(3,141634.4);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(4,311343.2);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(5,390297);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(6,421406.6);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(7,432454.7);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(8,455434.4);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(9,515077.3);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(10,625551.9);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(11,805238.3);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(12,1073241);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(13,1444911);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(14,1917913);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(15,2453120);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(16,2703959);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(17,1420609);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(18,821896.8);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(19,504034.2);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(20,312040.9);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(21,192224);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(22,116282.2);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(23,68426.8);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(24,38453.65);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(25,19998.55);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(26,9138.098);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(27,3488.125);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(28,863.4616);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(29,50.64375);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(2,4.727858);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(3,113.8266);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(4,169.5182);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(5,189.3634);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(6,197.2328);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(7,199.1438);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(8,203.8083);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(9,218.2421);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(10,240.0812);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(11,272);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(12,314.0775);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(13,365.9542);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(14,422.0453);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(15,478.3413);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(16,502.7502);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(17,364.5269);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(18,277.0353);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(19,216.2882);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(20,170.2173);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(21,133.4131);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(22,103.2125);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(23,79.32469);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(24,59.21926);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(25,42.79561);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(26,29.084);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(27,18.53041);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(28,9.25601);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(29,2.404603);
   VbbHcc_seljet_H_dR_stack_2->SetEntries(2.308027e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_seljet_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_seljet_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_seljet_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_H_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_seljet_H_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_seljet_H_dR_stack_1","QCD","F");

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
   H_dR_seljet_18->Modified();
   H_dR_seljet_18->cd();
   H_dR_seljet_18->SetSelected(H_dR_seljet_18);
}
