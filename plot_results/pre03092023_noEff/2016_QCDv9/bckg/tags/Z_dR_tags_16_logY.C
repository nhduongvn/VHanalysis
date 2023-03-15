#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_tags_16_logY()
{
//=========Macro generated from canvas: Z_dR_tags_16/Z_dR_tags_16
//=========  (Thu Feb 16 10:37:38 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_tags_16 = new TCanvas("Z_dR_tags_16", "Z_dR_tags_16",0,0,600,600);
   Z_dR_tags_16->SetHighLightColor(2);
   Z_dR_tags_16->Range(-1.310117,-0.8302947,7.029799,9.089928);
   Z_dR_tags_16->SetFillColor(0);
   Z_dR_tags_16->SetFillStyle(4000);
   Z_dR_tags_16->SetBorderMode(0);
   Z_dR_tags_16->SetBorderSize(2);
   Z_dR_tags_16->SetLogy();
   Z_dR_tags_16->SetLeftMargin(0.15709);
   Z_dR_tags_16->SetRightMargin(0.1234783);
   Z_dR_tags_16->SetBottomMargin(0.12);
   Z_dR_tags_16->SetFrameFillStyle(1000);
   Z_dR_tags_16->SetFrameBorderMode(0);
   Z_dR_tags_16->SetFrameFillStyle(1000);
   Z_dR_tags_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(5.341509e+07);
   
   TH1F *st_stack_17 = new TH1F("st_stack_17","",30,0,6);
   st_stack_17->SetMinimum(2.291564);
   st_stack_17->SetMaximum(1.252868e+08);
   st_stack_17->SetDirectory(0);
   st_stack_17->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_17->SetLineColor(ci);
   st_stack_17->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_17->GetXaxis()->SetRange(1,30);
   st_stack_17->GetXaxis()->SetLabelFont(42);
   st_stack_17->GetXaxis()->SetTitleOffset(1);
   st_stack_17->GetXaxis()->SetTitleFont(42);
   st_stack_17->GetYaxis()->SetTitle("Events/0.2");
   st_stack_17->GetYaxis()->SetLabelFont(42);
   st_stack_17->GetYaxis()->SetTitleSize(0.037);
   st_stack_17->GetYaxis()->SetTitleFont(42);
   st_stack_17->GetZaxis()->SetLabelFont(42);
   st_stack_17->GetZaxis()->SetTitleOffset(1);
   st_stack_17->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_17);
   
   
   TH1D *VbbHcc_tags_Z_dR_stack_1 = new TH1D("VbbHcc_tags_Z_dR_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(2,195.5053);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(3,491221.6);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(4,515306.3);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(5,414819.1);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(6,322274.6);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(7,295907.5);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(8,228464.8);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(9,284779.8);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(10,245617.8);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(11,250896.2);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(12,249388.3);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(13,278803);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(14,323174.3);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(15,402621.2);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(16,416945.5);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(17,214044.4);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(18,138681.6);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(19,77391.28);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(20,86935.88);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(21,40877.17);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(22,22489.48);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(23,19308.42);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(24,8972.697);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(25,5121.624);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(26,3354.232);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(27,553.8234);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(28,44.27204);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(2,60.59456);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(3,13192.29);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(4,16408.75);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(5,27744.69);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(6,13137.42);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(7,13565.15);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(8,8910.216);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(9,26046.41);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(10,11369.33);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(11,12360.61);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(12,11460.29);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(13,12233.37);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(14,14187.01);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(15,35202.11);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(16,32921.03);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(17,11397.99);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(18,9691.026);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(19,5174.776);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(20,21504.68);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(21,4681.99);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(22,3232.916);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(23,3230.697);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(24,1978.452);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(25,2030.814);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(26,1954.575);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(27,311.8217);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(28,30.15627);
   VbbHcc_tags_Z_dR_stack_1->SetEntries(237768);

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
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(2,10.15786);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(3,9875.221);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(4,18844.57);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(5,23101.34);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(6,27732.32);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(7,31896.85);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(8,35771.08);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(9,40134.24);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(10,45455.41);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(11,52056.61);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(12,59995.94);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(13,68892.93);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(14,78144.27);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(15,86488.16);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(16,86356.49);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(17,43981.53);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(18,24235.88);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(19,13763.61);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(20,7813.977);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(21,4306.59);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(22,2333.9);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(23,1200.025);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(24,590.823);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(25,260.751);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(26,103.0462);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(27,36.33896);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(28,7.676192);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(29,0.3106432);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(2,0.8502654);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(3,26.51536);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(4,36.67478);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(5,40.63881);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(6,44.539);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(7,47.75186);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(8,50.56811);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(9,53.56802);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(10,57.02572);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(11,61.07277);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(12,65.64323);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(13,70.41851);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(14,75.10201);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(15,79.12236);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(16,79.15776);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(17,56.54723);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(18,42.01628);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(19,31.67158);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(20,23.85092);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(21,17.70302);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(22,12.98454);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(23,9.291603);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(24,6.492173);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(25,4.312334);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(26,2.691505);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(27,1.557684);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(28,0.7262909);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(29,0.141624);
   VbbHcc_tags_Z_dR_stack_2->SetEntries(1.12179e+07);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_tags_16->Modified();
   Z_dR_tags_16->cd();
   Z_dR_tags_16->SetSelected(Z_dR_tags_16);
}
