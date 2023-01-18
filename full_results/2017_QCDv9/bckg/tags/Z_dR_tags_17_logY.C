#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_tags_17_logY()
{
//=========Macro generated from canvas: Z_dR_tags_17/Z_dR_tags_17
//=========  (Wed Jan 18 11:42:51 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_tags_17 = new TCanvas("Z_dR_tags_17", "Z_dR_tags_17",0,0,600,600);
   Z_dR_tags_17->SetHighLightColor(2);
   Z_dR_tags_17->Range(-1.310117,-1.060448,7.029799,10.3561);
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
   st->SetMaximum(6.397425e+08);
   
   TH1F *st_stack_18 = new TH1F("st_stack_18","",30,0,6);
   st_stack_18->SetMinimum(2.039567);
   st_stack_18->SetMaximum(1.638509e+09);
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
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(2,2071.589);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(3,4560578);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(4,5746751);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(5,4452317);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(6,4034740);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(7,3692408);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(8,3853087);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(9,3477430);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(10,3762605);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(11,3740916);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(12,3971358);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(13,4536481);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(14,4871132);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(15,5383733);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(16,6079062);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(17,3955821);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(18,2392689);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(19,1739440);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(20,1272286);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(21,988458.5);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(22,581445.3);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(23,503899.3);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(24,205634.8);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(25,127715.9);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(26,80193.72);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(27,37853.04);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(28,25521.17);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(29,9.669637);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(2,663.0886);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(3,139312.1);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(4,170798.5);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(5,162473.8);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(6,161712.1);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(7,161233.7);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(8,174609.8);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(9,159819.2);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(10,172459.1);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(11,173041.9);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(12,174681.8);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(13,194099.5);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(14,198140.3);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(15,206453.4);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(16,226234.2);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(17,190891.6);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(18,142367);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(19,122026.5);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(20,106135.2);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(21,98459.09);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(22,71807.81);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(23,71040.06);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(24,33565.24);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(25,36086.32);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(26,25214.64);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(27,13619.27);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(28,18039.4);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(29,9.203153);
   VbbHcc_tags_Z_dR_stack_1->SetEntries(539309);

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
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(2,27.06873);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(3,42870.35);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(4,86085.95);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(5,102786.9);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(6,125355.2);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(7,146901.3);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(8,167430.1);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(9,187625.8);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(10,208255.5);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(11,230166.6);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(12,253809.6);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(13,278487.9);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(14,302752.5);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(15,325059.2);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(16,318363.1);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(17,167748.2);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(18,95953.4);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(19,57096.54);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(20,33829.99);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(21,19601);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(22,11083.14);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(23,5986.966);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(24,3060.624);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(25,1453.865);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(26,612.9207);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(27,206.6965);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(28,46.70156);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(29,2.502063);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(2,1.404998);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(3,56.26527);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(4,79.93712);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(5,87.43096);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(6,96.59075);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(7,104.6099);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(8,111.6973);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(9,118.2682);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(10,124.6213);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(11,131.0598);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(12,137.6929);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(13,144.3121);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(14,150.5846);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(15,156.1254);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(16,154.612);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(17,112.2291);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(18,84.8389);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(19,65.41393);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(20,50.31552);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(21,38.24444);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(22,28.70798);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(23,21.03788);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(24,14.95476);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(25,10.3057);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(26,6.658498);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(27,3.802828);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(28,1.797285);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(29,0.4115862);
   VbbHcc_tags_Z_dR_stack_2->SetEntries(4.693889e+07);

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
