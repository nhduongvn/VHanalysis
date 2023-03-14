#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_seljet_17_logY()
{
//=========Macro generated from canvas: Z_dR_seljet_17/Z_dR_seljet_17
//=========  (Thu Feb 16 10:37:42 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_seljet_17 = new TCanvas("Z_dR_seljet_17", "Z_dR_seljet_17",0,0,600,600);
   Z_dR_seljet_17->SetHighLightColor(2);
   Z_dR_seljet_17->Range(-1.310117,-0.8076447,7.029799,12.1764);
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
   st->SetMinimum(30.80254);
   st->SetMaximum(2.707566e+10);
   
   TH1F *st_stack_274 = new TH1F("st_stack_274","",30,0,6);
   st_stack_274->SetMinimum(5.629124);
   st_stack_274->SetMaximum(7.550856e+10);
   st_stack_274->SetDirectory(0);
   st_stack_274->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_274->SetLineColor(ci);
   st_stack_274->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_274->GetXaxis()->SetRange(1,30);
   st_stack_274->GetXaxis()->SetLabelFont(42);
   st_stack_274->GetXaxis()->SetTitleOffset(1);
   st_stack_274->GetXaxis()->SetTitleFont(42);
   st_stack_274->GetYaxis()->SetTitle("Events/0.2");
   st_stack_274->GetYaxis()->SetLabelFont(42);
   st_stack_274->GetYaxis()->SetTitleSize(0.037);
   st_stack_274->GetYaxis()->SetTitleFont(42);
   st_stack_274->GetZaxis()->SetLabelFont(42);
   st_stack_274->GetZaxis()->SetTitleOffset(1);
   st_stack_274->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_274);
   
   
   TH1D *VbbHcc_seljet_Z_dR_stack_1 = new TH1D("VbbHcc_seljet_Z_dR_stack_1","",30,0,6);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(2,127310);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(3,9.771823e+07);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(4,1.428304e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(5,1.188133e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(6,1.156104e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(7,1.187835e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(8,1.232251e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(9,1.311413e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(10,1.444322e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(11,1.587621e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(12,1.810745e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(13,2.052737e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(14,2.311407e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(15,2.573834e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(16,2.697812e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(17,1.716942e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(18,1.206669e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(19,8.851752e+07);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(20,6.485667e+07);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(21,4.650606e+07);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(22,3.277744e+07);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(23,2.219853e+07);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(24,1.378364e+07);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(25,7990918);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(26,4025987);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(27,1746459);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(28,486403.9);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(29,30778.99);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(2,8287.09);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(3,319076.5);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(4,417633.9);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(5,407553.8);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(6,412034.1);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(7,438012.9);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(8,437373.2);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(9,459982.8);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(10,492169.2);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(11,501015);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(12,551876.6);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(13,583569.7);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(14,632210.7);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(15,685059.4);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(16,735645.9);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(17,592865.9);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(18,498287.5);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(19,425196.3);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(20,373163.2);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(21,308987.1);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(22,265836.3);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(23,217825.8);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(24,172297.7);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(25,136503);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(26,86940.85);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(27,63257.24);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(28,29117.6);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(29,4892.436);
   VbbHcc_seljet_Z_dR_stack_1->SetEntries(4.293574e+07);

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
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(2,202.9952);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(3,204129);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(4,407694.3);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(5,531492.7);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(6,653504.2);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(7,726668.8);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(8,751777.1);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(9,757840.5);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(10,770090.5);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(11,797579.1);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(12,840056.6);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(13,891380.7);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(14,946503.1);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(15,1000713);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(16,975416.1);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(17,525887.4);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(18,318873.3);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(19,205774.1);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(20,134082);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(21,86289.11);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(22,54156.39);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(23,32776.3);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(24,18605.91);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(25,9613.974);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(26,4429.46);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(27,1722.758);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(28,430.7773);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(29,23.55103);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(2,3.833949);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(3,122.7427);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(4,174.4097);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(5,199.6056);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(6,221.4049);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(7,233.4454);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(8,237.3865);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(9,238.3874);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(10,240.4526);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(11,244.9998);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(12,251.847);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(13,259.9044);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(14,268.2663);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(15,276.2991);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(16,273.0531);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(17,200.0126);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(18,155.2728);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(19,124.2995);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(20,99.96481);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(21,79.85867);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(22,62.99325);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(23,48.77131);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(24,36.57873);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(25,26.16096);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(26,17.6765);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(27,10.92552);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(28,5.397418);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(29,1.252485);
   VbbHcc_seljet_Z_dR_stack_2->SetEntries(1.694272e+08);

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
