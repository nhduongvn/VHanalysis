#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_tags_all()
{
//=========Macro generated from canvas: Z_dR_tags_all/Z_dR_tags_all
//=========  (Thu Mar  9 13:18:49 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_tags_all = new TCanvas("Z_dR_tags_all", "Z_dR_tags_all",0,0,600,600);
   Z_dR_tags_all->SetHighLightColor(2);
   Z_dR_tags_all->Range(-1.310117,-406565.9,7.029799,2981483);
   Z_dR_tags_all->SetFillColor(0);
   Z_dR_tags_all->SetFillStyle(4000);
   Z_dR_tags_all->SetBorderMode(0);
   Z_dR_tags_all->SetBorderSize(2);
   Z_dR_tags_all->SetLeftMargin(0.15709);
   Z_dR_tags_all->SetRightMargin(0.1234783);
   Z_dR_tags_all->SetBottomMargin(0.12);
   Z_dR_tags_all->SetFrameFillStyle(1000);
   Z_dR_tags_all->SetFrameBorderMode(0);
   Z_dR_tags_all->SetFrameFillStyle(1000);
   Z_dR_tags_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(2642678);
   
   TH1F *st_stack_20 = new TH1F("st_stack_20","",30,0,6);
   st_stack_20->SetMinimum(0);
   st_stack_20->SetMaximum(2642678);
   st_stack_20->SetDirectory(0);
   st_stack_20->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_20->SetLineColor(ci);
   st_stack_20->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_20->GetXaxis()->SetRange(1,30);
   st_stack_20->GetXaxis()->SetLabelFont(42);
   st_stack_20->GetXaxis()->SetTitleOffset(1);
   st_stack_20->GetXaxis()->SetTitleFont(42);
   st_stack_20->GetYaxis()->SetTitle("Event/0.2");
   st_stack_20->GetYaxis()->SetLabelFont(42);
   st_stack_20->GetYaxis()->SetTitleSize(0.037);
   st_stack_20->GetYaxis()->SetTitleFont(42);
   st_stack_20->GetZaxis()->SetLabelFont(42);
   st_stack_20->GetZaxis()->SetTitleOffset(1);
   st_stack_20->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_20);
   
   
   TH1D *VbbHcc_tags_Z_dR_all_stack_1 = new TH1D("VbbHcc_tags_Z_dR_all_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(2,1743.921);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(3,2090013);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(4,2110130);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(5,1545399);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(6,1447153);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(7,1292322);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(8,1060424);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(9,1038661);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(10,1179070);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(11,1105668);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(12,1117222);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(13,1301537);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(14,1480267);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(15,1643306);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(16,1747781);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(17,925449.3);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(18,638637.5);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(19,483850.1);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(20,321171);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(21,195515.5);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(22,123042.9);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(23,78135.39);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(24,57001.86);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(25,21005.71);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(26,10857.4);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(27,5374.755);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(28,606.1389);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(29,1448.799);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(2,554.6464);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(3,44812.75);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(4,34847.24);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(5,35858.08);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(6,51053.43);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(7,47982.74);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(8,33809.48);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(9,32187.68);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(10,61621.65);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(11,49308.53);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(12,44882.58);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(13,59051.72);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(14,67771.94);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(15,64473.37);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(16,65854.9);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(17,32372.01);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(18,44414.47);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(19,43175.66);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(20,38760.6);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(21,11399.1);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(22,9501.582);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(23,5871.785);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(24,6968.244);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(25,3656.265);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(26,3337.45);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(27,1932.461);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(28,352.9131);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(29,1438.394);
   VbbHcc_tags_Z_dR_all_stack_1->SetEntries(777279);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Z_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_all_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_all_stack_2 = new TH1D("VbbHcc_tags_Z_dR_all_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(2,34.75791);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(3,43081.8);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(4,83293.21);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(5,101905.5);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(6,122598.7);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(7,141279.4);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(8,158970.9);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(9,179165.9);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(10,202631.9);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(11,232067.6);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(12,266470.9);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(13,305581.9);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(14,345547.9);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(15,382746.1);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(16,381704.1);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(17,195403.1);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(18,107754.3);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(19,61828.24);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(20,35216.26);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(21,19639.73);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(22,10646.59);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(23,5523.274);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(24,2742.273);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(25,1250.324);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(26,501.1493);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(27,169.0637);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(28,40.52877);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(29,1.728795);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(2,1.578097);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(3,57.80852);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(4,80.40973);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(5,89.03516);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(6,98.26062);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(7,104.9409);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(8,111.3221);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(9,118.2444);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(10,125.3418);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(11,134.6802);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(12,144.1953);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(13,154.7407);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(14,164.9719);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(15,173.7625);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(16,173.6428);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(17,124.8064);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(18,92.58339);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(19,70.24709);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(20,52.81837);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(21,39.94437);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(22,28.8839);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(23,20.68467);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(24,14.37371);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(25,9.781275);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(26,6.946053);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(27,3.591131);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(28,2.70387);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(29,0.3490051);
   VbbHcc_tags_Z_dR_all_stack_2->SetEntries(5.04042e+07);

   ci = TColor::GetColor("#990099");
   VbbHcc_tags_Z_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_all_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_all_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_tags_all->Modified();
   Z_dR_tags_all->cd();
   Z_dR_tags_all->SetSelected(Z_dR_tags_all);
}
