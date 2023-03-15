#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_algo_18()
{
//=========Macro generated from canvas: Z_dR_algo_18/Z_dR_algo_18
//=========  (Wed Jan 18 11:43:11 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_algo_18 = new TCanvas("Z_dR_algo_18", "Z_dR_algo_18",0,0,600,600);
   Z_dR_algo_18->SetHighLightColor(2);
   Z_dR_algo_18->Range(-1.310117,-321001.1,7.029799,2354008);
   Z_dR_algo_18->SetFillColor(0);
   Z_dR_algo_18->SetFillStyle(4000);
   Z_dR_algo_18->SetBorderMode(0);
   Z_dR_algo_18->SetBorderSize(2);
   Z_dR_algo_18->SetLeftMargin(0.15709);
   Z_dR_algo_18->SetRightMargin(0.1234783);
   Z_dR_algo_18->SetBottomMargin(0.12);
   Z_dR_algo_18->SetFrameFillStyle(1000);
   Z_dR_algo_18->SetFrameBorderMode(0);
   Z_dR_algo_18->SetFrameFillStyle(1000);
   Z_dR_algo_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(2086507);
   
   TH1F *st_stack_83 = new TH1F("st_stack_83","",30,0,6);
   st_stack_83->SetMinimum(0);
   st_stack_83->SetMaximum(2086507);
   st_stack_83->SetDirectory(0);
   st_stack_83->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_83->SetLineColor(ci);
   st_stack_83->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_83->GetXaxis()->SetRange(1,30);
   st_stack_83->GetXaxis()->SetLabelFont(42);
   st_stack_83->GetXaxis()->SetTitleOffset(1);
   st_stack_83->GetXaxis()->SetTitleFont(42);
   st_stack_83->GetYaxis()->SetTitle("Events/0.2");
   st_stack_83->GetYaxis()->SetLabelFont(42);
   st_stack_83->GetYaxis()->SetTitleSize(0.037);
   st_stack_83->GetYaxis()->SetTitleFont(42);
   st_stack_83->GetZaxis()->SetLabelFont(42);
   st_stack_83->GetZaxis()->SetTitleOffset(1);
   st_stack_83->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_83);
   
   
   TH1D *VbbHcc_algo_Z_dR_stack_1 = new TH1D("VbbHcc_algo_Z_dR_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(2,2982.181);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(3,1176305);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(4,1381447);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(5,1155207);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(6,1035591);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(7,765650.9);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(8,770849.2);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(9,758001.2);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(10,731043.9);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(11,473621.7);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(12,555322.2);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(13,468374.1);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(14,509375.8);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(15,475206.3);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(16,466922.3);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(17,174265.8);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(18,122690);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(19,72656.65);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(20,132540.3);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(21,21707.82);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(22,8461.575);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(23,2363.889);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(24,2667.5);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(25,644.6288);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(26,3166.888);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(27,23.96063);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(2,2138.333);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(3,91837.02);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(4,98257.49);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(5,112916.6);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(6,106301.8);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(7,80583.69);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(8,83289.02);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(9,94281.2);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(10,90083.63);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(11,59606.04);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(12,79666.76);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(13,67307.21);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(14,80105.3);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(15,81715);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(16,71740.87);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(17,30814.73);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(18,29691.39);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(19,33509.89);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(20,46806.42);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(21,6015.49);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(22,3109.891);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(23,801.5148);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(24,1002.639);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(25,389.9478);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(26,2258.816);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(27,16.15055);
   VbbHcc_algo_Z_dR_stack_1->SetEntries(38074);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_2 = new TH1D("VbbHcc_algo_Z_dR_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(2,3.46515);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(3,4248.5);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(4,9557.553);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(5,12743.02);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(6,16018.65);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(7,18331.91);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(8,19330.25);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(9,19276.65);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(10,18091.82);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(11,16514.26);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(12,14539.09);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(13,12746.49);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(14,11256.79);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(15,10092.35);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(16,8676.447);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(17,4051.889);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(18,2013.316);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(19,1021.917);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(20,540.2825);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(21,267.2251);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(22,124.5344);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(23,56.19717);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(24,23.22332);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(25,10.11223);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(26,3.757563);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(27,0.7638478);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(28,0.1916054);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(2,0.572264);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(3,20.05352);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(4,30.18271);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(5,35.00822);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(6,40.18604);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(7,42.58818);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(8,42.85928);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(9,42.92029);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(10,41.60303);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(11,39.65575);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(12,36.92157);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(13,34.39813);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(14,32.68761);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(15,31.38192);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(16,28.58215);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(17,19.29749);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(18,14.25131);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(19,9.383564);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(20,6.784856);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(21,4.966858);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(22,3.328082);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(23,2.218534);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(24,1.370991);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(25,0.8964479);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(26,0.5526634);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(27,0.2755385);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(28,0.1628152);
   VbbHcc_algo_Z_dR_stack_2->SetEntries(2572457);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_1","QCD","F");

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
   Z_dR_algo_18->Modified();
   Z_dR_algo_18->cd();
   Z_dR_algo_18->SetSelected(Z_dR_algo_18);
}
