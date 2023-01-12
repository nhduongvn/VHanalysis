#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj1_algo_17_logY()
{
//=========Macro generated from canvas: H_dR_Bj1_algo_17/H_dR_Bj1_algo_17
//=========  (Mon Dec 19 11:15:39 2022) by ROOT version 6.26/06
   TCanvas *H_dR_Bj1_algo_17 = new TCanvas("H_dR_Bj1_algo_17", "H_dR_Bj1_algo_17",0,0,600,600);
   H_dR_Bj1_algo_17->SetHighLightColor(2);
   H_dR_Bj1_algo_17->Range(-1.310117,-0.8760802,7.029799,9.338929);
   H_dR_Bj1_algo_17->SetFillColor(0);
   H_dR_Bj1_algo_17->SetFillStyle(4000);
   H_dR_Bj1_algo_17->SetBorderMode(0);
   H_dR_Bj1_algo_17->SetBorderSize(2);
   H_dR_Bj1_algo_17->SetLogy();
   H_dR_Bj1_algo_17->SetLeftMargin(0.15709);
   H_dR_Bj1_algo_17->SetRightMargin(0.1234783);
   H_dR_Bj1_algo_17->SetBottomMargin(0.12);
   H_dR_Bj1_algo_17->SetFrameFillStyle(1000);
   H_dR_Bj1_algo_17->SetFrameBorderMode(0);
   H_dR_Bj1_algo_17->SetFrameFillStyle(1000);
   H_dR_Bj1_algo_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(8.697907e+07);
   
   TH1F *st_stack_102 = new TH1F("st_stack_102","",30,0,6);
   st_stack_102->SetMinimum(2.237283);
   st_stack_102->SetMaximum(2.076958e+08);
   st_stack_102->SetDirectory(0);
   st_stack_102->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_102->SetLineColor(ci);
   st_stack_102->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   st_stack_102->GetXaxis()->SetRange(1,30);
   st_stack_102->GetXaxis()->SetLabelFont(42);
   st_stack_102->GetXaxis()->SetTitleOffset(1);
   st_stack_102->GetXaxis()->SetTitleFont(42);
   st_stack_102->GetYaxis()->SetTitle("Events/0.2");
   st_stack_102->GetYaxis()->SetLabelFont(42);
   st_stack_102->GetYaxis()->SetTitleSize(0.037);
   st_stack_102->GetYaxis()->SetTitleFont(42);
   st_stack_102->GetZaxis()->SetLabelFont(42);
   st_stack_102->GetZaxis()->SetTitleOffset(1);
   st_stack_102->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_102);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(2,389602.3);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(3,840722.5);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(4,779397.1);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(5,853146.2);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(6,716962.2);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(7,690786.7);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(8,666792.8);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(9,521796.1);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(10,425489.7);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(11,548166.3);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(12,515721.1);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(13,300797.4);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(14,387090.4);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(15,281843.2);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(16,273705.2);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(17,189677.7);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(18,127074.2);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(19,75417.67);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(20,40923.45);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(21,42694.04);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(22,41931.76);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(23,22327.38);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(24,4878.951);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(25,2081.957);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(26,1564.182);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(27,276.332);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(28,30.26473);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(2,45762.3);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(3,76119.15);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(4,74603.57);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(5,83665.14);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(6,70148.87);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(7,69967.67);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(8,72519.1);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(9,56361.43);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(10,46056.27);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(11,63156.58);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(12,61236.66);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(13,34713.73);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(14,51462.33);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(15,34395.23);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(16,37053.28);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(17,33441.15);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(18,26165.53);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(19,21163.36);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(20,5297.807);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(21,15172.85);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(22,20643.23);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(23,14645.02);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(24,1825.184);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(25,1240.558);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(26,1211.827);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(27,255.234);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(28,23.44355);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetEntries(44389);

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
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(1,1.644582);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(2,3234.065);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(3,11307.14);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(4,15986.13);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(5,16644.53);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(6,14682.5);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(7,12359);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(8,10367.39);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(9,8637.935);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(10,7240.434);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(11,6075.734);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(12,5238.999);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(13,4587.246);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(14,4133.023);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(15,3812.665);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(16,3450.944);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(17,2036.486);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(18,1330.076);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(19,863.8787);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(20,573.1886);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(21,363.8889);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(22,215.6449);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(23,123.2314);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(24,65.05511);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(25,33.05953);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(26,15.6024);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(27,6.426719);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(28,2.735056);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(29,1.676742);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(30,0.8306026);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(31,1.546713);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(1,0.3096632);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(2,13.5585);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(3,25.40353);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(4,30.39756);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(5,31.25048);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(6,29.56872);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(7,27.26229);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(8,25.02332);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(9,22.82841);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(10,20.87247);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(11,19.06385);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(12,17.66624);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(13,16.49618);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(14,15.63646);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(15,15.01374);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(16,14.26349);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(17,10.93252);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(18,8.81227);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(19,7.097692);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(20,5.774381);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(21,4.605135);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(22,3.542009);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(23,2.670694);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(24,1.939798);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(25,1.39624);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(26,0.9575809);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(27,0.6205877);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(28,0.4056575);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(29,0.3293466);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(30,0.2195099);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(31,0.3153613);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetEntries(2378377);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj1_algo_17->Modified();
   H_dR_Bj1_algo_17->cd();
   H_dR_Bj1_algo_17->SetSelected(H_dR_Bj1_algo_17);
}
