#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_tags_17_logY()
{
//=========Macro generated from canvas: Z_dR_tags_17/Z_dR_tags_17
//=========  (Thu Feb 16 10:37:38 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_tags_17 = new TCanvas("Z_dR_tags_17", "Z_dR_tags_17",0,0,600,600);
   Z_dR_tags_17->SetHighLightColor(2);
   Z_dR_tags_17->Range(-1.310117,-0.8634305,7.029799,9.269985);
   Z_dR_tags_17->SetFillColor(0);
   Z_dR_tags_17->SetFillStyle(4000);
   Z_dR_tags_17->SetBorderMode(0);
   Z_dR_tags_17->SetBorderSize(2);
   Z_dR_tags_17->SetLogy();
   Z_dR_tags_17->SetLeftMargin(0.15709);
   Z_dR_tags_17->SetRightMargin(0.1234783);
   Z_dR_tags_17->SetBottomMargin(0.12);
   Z_dR_tags_17->SetFrameFillStyle(1000);
   Z_dR_tags_17->SetFrameBorderMode(0);
   Z_dR_tags_17->SetFrameFillStyle(1000);
   Z_dR_tags_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(7.599222e+07);
   
   TH1F *st_stack_18 = new TH1F("st_stack_18","",30,0,6);
   st_stack_18->SetMinimum(2.252057);
   st_stack_18->SetMaximum(1.805692e+08);
   st_stack_18->SetDirectory(0);
   st_stack_18->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_18->SetLineColor(ci);
   st_stack_18->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_18->GetXaxis()->SetRange(1,30);
   st_stack_18->GetXaxis()->SetLabelFont(42);
   st_stack_18->GetXaxis()->SetTitleOffset(1);
   st_stack_18->GetXaxis()->SetTitleFont(42);
   st_stack_18->GetYaxis()->SetTitle("Events/0.2");
   st_stack_18->GetYaxis()->SetLabelFont(42);
   st_stack_18->GetYaxis()->SetTitleSize(0.037);
   st_stack_18->GetYaxis()->SetTitleFont(42);
   st_stack_18->GetZaxis()->SetLabelFont(42);
   st_stack_18->GetZaxis()->SetTitleOffset(1);
   st_stack_18->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_18);
   
   
   TH1D *VbbHcc_tags_Z_dR_stack_1 = new TH1D("VbbHcc_tags_Z_dR_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(2,869.094);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(3,665877.2);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(4,696862.8);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(5,485290.7);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(6,487969.3);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(7,464346.1);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(8,358633.4);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(9,322383.5);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(10,334974.6);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(11,355375.1);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(12,371658.5);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(13,425544.2);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(14,510641.6);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(15,574922.9);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(16,636102.7);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(17,322709.6);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(18,190351.2);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(19,162228.6);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(20,87354.63);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(21,58552.09);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(22,36676.59);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(23,31010.03);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(24,21995.9);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(25,5053.83);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(26,1663.886);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(27,2573.961);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(28,525.4746);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(29,9.277254);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(2,404.1716);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(3,15882.67);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(4,22413.36);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(5,14962.79);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(6,35238.55);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(7,41454.08);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(8,26722.59);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(9,12343.19);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(10,12809.8);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(11,20899.3);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(12,24701.82);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(13,32628.94);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(14,41586.48);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(15,38613.25);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(16,47975.09);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(17,27790.2);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(18,9811.168);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(19,21308.19);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(20,6288.258);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(21,5337.561);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(22,4607.83);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(23,4212.445);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(24,4083.64);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(25,940.3809);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(26,458.4253);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(27,1846.182);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(28,351.3188);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(29,9.277254);
   VbbHcc_tags_Z_dR_stack_1->SetEntries(261984);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_2 = new TH1D("VbbHcc_tags_Z_dR_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(2,10.02357);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(3,13786.55);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(4,27102.88);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(5,33158.66);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(6,39869.06);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(7,45932.57);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(8,51848.23);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(9,58350.69);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(10,66070.1);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(11,75500.55);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(12,86667.04);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(13,99390.8);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(14,112237.1);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(15,124383.3);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(16,123819.5);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(17,63349.83);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(18,35039.21);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(19,20097.78);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(20,11474.7);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(21,6390.097);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(22,3486.959);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(23,1815.212);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(24,891.437);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(25,412.1818);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(26,163.8584);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(27,54.03766);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(28,11.06495);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(29,0.8017987);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(2,0.8530932);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(3,32.26094);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(4,45.34614);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(5,50.1942);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(6,55.03902);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(7,59.10219);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(8,62.77113);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(9,66.60857);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(10,70.89963);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(11,75.86092);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(12,81.36284);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(13,87.23553);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(14,92.85865);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(15,97.8785);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(16,97.77599);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(17,69.97532);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(18,52.05975);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(19,39.41826);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(20,29.76215);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(21,22.18212);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(22,16.36405);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(23,11.73913);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(24,8.165091);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(25,5.534443);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(26,3.480135);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(27,1.952901);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(28,0.8541179);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(29,0.236224);
   VbbHcc_tags_Z_dR_stack_2->SetEntries(1.581007e+07);

   ci = TColor::GetColor("#990099");
   VbbHcc_tags_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_1","QCD","F");

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
   Z_dR_tags_17->Modified();
   Z_dR_tags_17->cd();
   Z_dR_tags_17->SetSelected(Z_dR_tags_17);
}
