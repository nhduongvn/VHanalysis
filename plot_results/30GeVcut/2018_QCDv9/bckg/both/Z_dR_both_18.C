#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_both_18()
{
//=========Macro generated from canvas: Z_dR_both_18/Z_dR_both_18
//=========  (Tue Feb 14 16:10:11 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_both_18 = new TCanvas("Z_dR_both_18", "Z_dR_both_18",0,0,600,600);
   Z_dR_both_18->SetHighLightColor(2);
   Z_dR_both_18->Range(-1.310117,-1436268,7.029799,1.053263e+07);
   Z_dR_both_18->SetFillColor(0);
   Z_dR_both_18->SetFillStyle(4000);
   Z_dR_both_18->SetBorderMode(0);
   Z_dR_both_18->SetBorderSize(2);
   Z_dR_both_18->SetLeftMargin(0.15709);
   Z_dR_both_18->SetRightMargin(0.1234783);
   Z_dR_both_18->SetBottomMargin(0.12);
   Z_dR_both_18->SetFrameFillStyle(1000);
   Z_dR_both_18->SetFrameBorderMode(0);
   Z_dR_both_18->SetFrameFillStyle(1000);
   Z_dR_both_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(9335743);
   
   TH1F *st_stack_147 = new TH1F("st_stack_147","",30,0,6);
   st_stack_147->SetMinimum(0);
   st_stack_147->SetMaximum(9335743);
   st_stack_147->SetDirectory(0);
   st_stack_147->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_147->SetLineColor(ci);
   st_stack_147->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_147->GetXaxis()->SetRange(1,30);
   st_stack_147->GetXaxis()->SetLabelFont(42);
   st_stack_147->GetXaxis()->SetTitleOffset(1);
   st_stack_147->GetXaxis()->SetTitleFont(42);
   st_stack_147->GetYaxis()->SetTitle("Events/0.2");
   st_stack_147->GetYaxis()->SetLabelFont(42);
   st_stack_147->GetYaxis()->SetTitleSize(0.037);
   st_stack_147->GetYaxis()->SetTitleFont(42);
   st_stack_147->GetZaxis()->SetLabelFont(42);
   st_stack_147->GetZaxis()->SetTitleOffset(1);
   st_stack_147->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_147);
   
   
   TH1D *VbbHcc_both_Z_dR_stack_1 = new TH1D("VbbHcc_both_Z_dR_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(2,1812.546);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(3,4922294);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(4,6104592);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(5,4280263);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(6,3455831);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(7,3441040);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(8,3084624);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(9,3001161);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(10,2951993);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(11,3036695);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(12,3139958);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(13,3483233);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(14,4053631);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(15,4529534);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(16,4373399);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(17,2663092);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(18,1739086);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(19,1292841);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(20,953533.3);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(21,511283.2);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(22,565601.2);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(23,203659.2);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(24,136833.2);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(25,73477.44);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(26,43792.48);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(27,36050.19);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(28,5599.295);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(29,1826.284);
   VbbHcc_both_Z_dR_stack_1->SetBinError(2,715.3323);
   VbbHcc_both_Z_dR_stack_1->SetBinError(3,178963.4);
   VbbHcc_both_Z_dR_stack_1->SetBinError(4,201143.7);
   VbbHcc_both_Z_dR_stack_1->SetBinError(5,167104.2);
   VbbHcc_both_Z_dR_stack_1->SetBinError(6,139669.2);
   VbbHcc_both_Z_dR_stack_1->SetBinError(7,155454.1);
   VbbHcc_both_Z_dR_stack_1->SetBinError(8,136826);
   VbbHcc_both_Z_dR_stack_1->SetBinError(9,151404.3);
   VbbHcc_both_Z_dR_stack_1->SetBinError(10,138075.4);
   VbbHcc_both_Z_dR_stack_1->SetBinError(11,168703.3);
   VbbHcc_both_Z_dR_stack_1->SetBinError(12,143392);
   VbbHcc_both_Z_dR_stack_1->SetBinError(13,164005);
   VbbHcc_both_Z_dR_stack_1->SetBinError(14,179848.3);
   VbbHcc_both_Z_dR_stack_1->SetBinError(15,197638.5);
   VbbHcc_both_Z_dR_stack_1->SetBinError(16,181990.5);
   VbbHcc_both_Z_dR_stack_1->SetBinError(17,139097.2);
   VbbHcc_both_Z_dR_stack_1->SetBinError(18,118611.7);
   VbbHcc_both_Z_dR_stack_1->SetBinError(19,105433.1);
   VbbHcc_both_Z_dR_stack_1->SetBinError(20,96421.6);
   VbbHcc_both_Z_dR_stack_1->SetBinError(21,56291.42);
   VbbHcc_both_Z_dR_stack_1->SetBinError(22,82556.73);
   VbbHcc_both_Z_dR_stack_1->SetBinError(23,18024.17);
   VbbHcc_both_Z_dR_stack_1->SetBinError(24,24901.88);
   VbbHcc_both_Z_dR_stack_1->SetBinError(25,10649.39);
   VbbHcc_both_Z_dR_stack_1->SetBinError(26,8999.852);
   VbbHcc_both_Z_dR_stack_1->SetBinError(27,24513.13);
   VbbHcc_both_Z_dR_stack_1->SetBinError(28,3383.724);
   VbbHcc_both_Z_dR_stack_1->SetBinError(29,1825.661);
   VbbHcc_both_Z_dR_stack_1->SetEntries(497710);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_2 = new TH1D("VbbHcc_both_Z_dR_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(2,43.14588);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(3,61561.66);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(4,119236.4);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(5,142356.3);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(6,173270.4);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(7,202369.4);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(8,230115.8);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(9,257746.8);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(10,285377.5);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(11,315871.7);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(12,347565.6);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(13,381352.2);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(14,414573.1);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(15,444357.6);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(16,435021.8);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(17,229680.6);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(18,130765.7);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(19,77772.7);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(20,45909.63);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(21,26469);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(22,14828.13);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(23,8013.298);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(24,4091.201);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(25,1893.994);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(26,790.2616);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(27,274.9286);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(28,66.20327);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(29,3.656313);
   VbbHcc_both_Z_dR_stack_2->SetBinError(2,1.951467);
   VbbHcc_both_Z_dR_stack_2->SetBinError(3,76.98537);
   VbbHcc_both_Z_dR_stack_2->SetBinError(4,106.9622);
   VbbHcc_both_Z_dR_stack_2->SetBinError(5,116.5992);
   VbbHcc_both_Z_dR_stack_2->SetBinError(6,129.1975);
   VbbHcc_both_Z_dR_stack_2->SetBinError(7,139.1401);
   VbbHcc_both_Z_dR_stack_2->SetBinError(8,148.8245);
   VbbHcc_both_Z_dR_stack_2->SetBinError(9,157.1515);
   VbbHcc_both_Z_dR_stack_2->SetBinError(10,165.224);
   VbbHcc_both_Z_dR_stack_2->SetBinError(11,174.7455);
   VbbHcc_both_Z_dR_stack_2->SetBinError(12,182.3786);
   VbbHcc_both_Z_dR_stack_2->SetBinError(13,191.4901);
   VbbHcc_both_Z_dR_stack_2->SetBinError(14,199.7766);
   VbbHcc_both_Z_dR_stack_2->SetBinError(15,207.0862);
   VbbHcc_both_Z_dR_stack_2->SetBinError(16,204.9114);
   VbbHcc_both_Z_dR_stack_2->SetBinError(17,149.7342);
   VbbHcc_both_Z_dR_stack_2->SetBinError(18,112.9341);
   VbbHcc_both_Z_dR_stack_2->SetBinError(19,86.95976);
   VbbHcc_both_Z_dR_stack_2->SetBinError(20,66.88528);
   VbbHcc_both_Z_dR_stack_2->SetBinError(21,51.04788);
   VbbHcc_both_Z_dR_stack_2->SetBinError(22,38.43322);
   VbbHcc_both_Z_dR_stack_2->SetBinError(23,28.28562);
   VbbHcc_both_Z_dR_stack_2->SetBinError(24,19.49617);
   VbbHcc_both_Z_dR_stack_2->SetBinError(25,13.28126);
   VbbHcc_both_Z_dR_stack_2->SetBinError(26,9.306783);
   VbbHcc_both_Z_dR_stack_2->SetBinError(27,5.108348);
   VbbHcc_both_Z_dR_stack_2->SetBinError(28,3.519518);
   VbbHcc_both_Z_dR_stack_2->SetBinError(29,0.541581);
   VbbHcc_both_Z_dR_stack_2->SetEntries(5.594992e+07);

   ci = TColor::GetColor("#990099");
   VbbHcc_both_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_1","QCD","F");

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
   Z_dR_both_18->Modified();
   Z_dR_both_18->cd();
   Z_dR_both_18->SetSelected(Z_dR_both_18);
}
