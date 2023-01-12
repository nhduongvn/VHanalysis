#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_seljet_17_logY()
{
//=========Macro generated from canvas: Z_dR_seljet_17/Z_dR_seljet_17
//=========  (Mon Dec 19 11:15:41 2022) by ROOT version 6.26/06
   TCanvas *Z_dR_seljet_17 = new TCanvas("Z_dR_seljet_17", "Z_dR_seljet_17",0,0,600,600);
   Z_dR_seljet_17->SetHighLightColor(2);
   Z_dR_seljet_17->Range(-1.310117,0.121055,7.029799,13.02552);
   Z_dR_seljet_17->SetFillColor(0);
   Z_dR_seljet_17->SetFillStyle(4000);
   Z_dR_seljet_17->SetBorderMode(0);
   Z_dR_seljet_17->SetBorderSize(2);
   Z_dR_seljet_17->SetLogy();
   Z_dR_seljet_17->SetLeftMargin(0.15709);
   Z_dR_seljet_17->SetRightMargin(0.1234783);
   Z_dR_seljet_17->SetBottomMargin(0.12);
   Z_dR_seljet_17->SetFrameFillStyle(1000);
   Z_dR_seljet_17->SetFrameBorderMode(0);
   Z_dR_seljet_17->SetFrameFillStyle(1000);
   Z_dR_seljet_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(254.3492);
   st->SetMaximum(1.956428e+11);
   
   TH1F *st_stack_242 = new TH1F("st_stack_242","",30,0,6);
   st_stack_242->SetMinimum(46.72944);
   st_stack_242->SetMaximum(5.433405e+11);
   st_stack_242->SetDirectory(0);
   st_stack_242->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_242->SetLineColor(ci);
   st_stack_242->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_242->GetXaxis()->SetRange(1,30);
   st_stack_242->GetXaxis()->SetLabelFont(42);
   st_stack_242->GetXaxis()->SetTitleOffset(1);
   st_stack_242->GetXaxis()->SetTitleFont(42);
   st_stack_242->GetYaxis()->SetTitle("Events/0.2");
   st_stack_242->GetYaxis()->SetLabelFont(42);
   st_stack_242->GetYaxis()->SetTitleSize(0.037);
   st_stack_242->GetYaxis()->SetTitleFont(42);
   st_stack_242->GetZaxis()->SetLabelFont(42);
   st_stack_242->GetZaxis()->SetTitleOffset(1);
   st_stack_242->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_242);
   
   
   TH1D *VbbHcc_seljet_Z_dR_stack_1 = new TH1D("VbbHcc_seljet_Z_dR_stack_1","",30,0,6);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(2,581594.9);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(3,5.336041e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(4,1.028398e+09);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(5,8.633285e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(6,8.656835e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(7,9.061899e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(8,9.489407e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(9,1.022951e+09);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(10,1.113895e+09);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(11,1.214875e+09);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(12,1.354076e+09);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(13,1.502283e+09);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(14,1.675835e+09);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(15,1.87076e+09);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(16,1.954606e+09);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(17,1.276147e+09);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(18,9.201897e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(19,6.906049e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(20,5.26116e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(21,3.881425e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(22,2.823581e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(23,1.941124e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(24,1.258792e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(25,7.412573e+07);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(26,3.788058e+07);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(27,1.685928e+07);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(28,5065962);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(29,254288);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(2,58007.97);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(3,1671707);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(4,2566570);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(5,2393170);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(6,2432840);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(7,2518316);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(8,2586970);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(9,2720530);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(10,2853598);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(11,2975059);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(12,3164024);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(13,3340583);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(14,3571308);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(15,3828045);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(16,3970757);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(17,3207706);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(18,2738445);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(19,2382536);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(20,2105428);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(21,1815666);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(22,1566300);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(23,1295577);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(24,1057950);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(25,820914);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(26,582826.1);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(27,395093.7);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(28,219844);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(29,40236.64);
   VbbHcc_seljet_Z_dR_stack_1->SetEntries(7.519253e+07);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_seljet_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_seljet_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_seljet_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_seljet_Z_dR_stack_2 = new TH1D("VbbHcc_seljet_Z_dR_stack_2","",30,0,6);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(2,371.1724);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(3,378714.7);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(4,759472.3);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(5,923290.6);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(6,1132611);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(7,1311398);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(8,1446023);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(9,1540722);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(10,1606132);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(11,1661306);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(12,1717885);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(13,1777670);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(14,1839418);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(15,1900007);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(16,1821672);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(17,988019.1);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(18,605207.5);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(19,396258.6);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(20,263507.8);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(21,173743.6);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(22,112266.5);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(23,69810.59);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(24,40771.85);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(25,21503.42);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(26,10206.42);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(27,4062.593);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(28,1060.828);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(29,61.11919);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(2,5.011901);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(3,161.5885);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(4,230.1466);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(5,254.9567);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(6,282.7367);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(7,304.249);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(8,319.3276);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(9,329.496);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(10,336.4485);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(11,342.4327);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(12,348.6595);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(13,355.2799);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(14,362.0311);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(15,368.5779);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(16,361.244);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(17,265.1836);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(18,206.7581);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(19,166.6004);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(20,135.2475);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(21,109.3008);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(22,87.46496);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(23,68.62491);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(24,52.20874);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(25,37.76088);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(26,25.90544);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(27,16.20993);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(28,8.203925);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(29,1.965572);
   VbbHcc_seljet_Z_dR_stack_2->SetEntries(3.541626e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_seljet_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_seljet_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_seljet_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Z_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_seljet_Z_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_seljet_Z_dR_stack_1","QCD","F");

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
   Z_dR_seljet_17->Modified();
   Z_dR_seljet_17->cd();
   Z_dR_seljet_17->SetSelected(Z_dR_seljet_17);
}
