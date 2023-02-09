#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_both_17()
{
//=========Macro generated from canvas: Z_dR_both_17/Z_dR_both_17
//=========  (Wed Jan 18 11:43:12 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_both_17 = new TCanvas("Z_dR_both_17", "Z_dR_both_17",0,0,600,600);
   Z_dR_both_17->SetHighLightColor(2);
   Z_dR_both_17->Range(-1.310117,-1519411,7.029799,1.114234e+07);
   Z_dR_both_17->SetFillColor(0);
   Z_dR_both_17->SetFillStyle(4000);
   Z_dR_both_17->SetBorderMode(0);
   Z_dR_both_17->SetBorderSize(2);
   Z_dR_both_17->SetLeftMargin(0.15709);
   Z_dR_both_17->SetRightMargin(0.1234783);
   Z_dR_both_17->SetBottomMargin(0.12);
   Z_dR_both_17->SetFrameFillStyle(1000);
   Z_dR_both_17->SetFrameBorderMode(0);
   Z_dR_both_17->SetFrameFillStyle(1000);
   Z_dR_both_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(9876168);
   
   TH1F *st_stack_146 = new TH1F("st_stack_146","",30,0,6);
   st_stack_146->SetMinimum(0);
   st_stack_146->SetMaximum(9876168);
   st_stack_146->SetDirectory(0);
   st_stack_146->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_146->SetLineColor(ci);
   st_stack_146->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_146->GetXaxis()->SetRange(1,30);
   st_stack_146->GetXaxis()->SetLabelFont(42);
   st_stack_146->GetXaxis()->SetTitleOffset(1);
   st_stack_146->GetXaxis()->SetTitleFont(42);
   st_stack_146->GetYaxis()->SetTitle("Events/0.2");
   st_stack_146->GetYaxis()->SetLabelFont(42);
   st_stack_146->GetYaxis()->SetTitleSize(0.037);
   st_stack_146->GetYaxis()->SetTitleFont(42);
   st_stack_146->GetZaxis()->SetLabelFont(42);
   st_stack_146->GetZaxis()->SetTitleOffset(1);
   st_stack_146->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_146);
   
   
   TH1D *VbbHcc_both_Z_dR_stack_1 = new TH1D("VbbHcc_both_Z_dR_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(2,2571.335);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(3,4647202);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(4,5873399);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(5,4520789);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(6,4138279);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(7,3813066);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(8,3919315);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(9,3668655);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(10,3863412);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(11,3812479);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(12,4055282);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(13,4654533);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(14,4989340);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(15,5580065);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(16,6253013);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(17,4091419);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(18,2468201);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(19,1770821);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(20,1293892);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(21,1004075);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(22,593195.2);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(23,516691.4);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(24,227722.2);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(25,131162);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(26,82684.26);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(27,37892.05);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(28,27290.7);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(29,9.669637);
   VbbHcc_both_Z_dR_stack_1->SetBinError(2,752.0559);
   VbbHcc_both_Z_dR_stack_1->SetBinError(3,139562.8);
   VbbHcc_both_Z_dR_stack_1->SetBinError(4,171613.2);
   VbbHcc_both_Z_dR_stack_1->SetBinError(5,162306.8);
   VbbHcc_both_Z_dR_stack_1->SetBinError(6,163796.1);
   VbbHcc_both_Z_dR_stack_1->SetBinError(7,163449.1);
   VbbHcc_both_Z_dR_stack_1->SetBinError(8,174732.9);
   VbbHcc_both_Z_dR_stack_1->SetBinError(9,168058.2);
   VbbHcc_both_Z_dR_stack_1->SetBinError(10,174313.3);
   VbbHcc_both_Z_dR_stack_1->SetBinError(11,173191.2);
   VbbHcc_both_Z_dR_stack_1->SetBinError(12,174892.1);
   VbbHcc_both_Z_dR_stack_1->SetBinError(13,195565.5);
   VbbHcc_both_Z_dR_stack_1->SetBinError(14,199494.4);
   VbbHcc_both_Z_dR_stack_1->SetBinError(15,210915.3);
   VbbHcc_both_Z_dR_stack_1->SetBinError(16,228999.9);
   VbbHcc_both_Z_dR_stack_1->SetBinError(17,194692.7);
   VbbHcc_both_Z_dR_stack_1->SetBinError(18,144691.3);
   VbbHcc_both_Z_dR_stack_1->SetBinError(19,122128.2);
   VbbHcc_both_Z_dR_stack_1->SetBinError(20,106212.4);
   VbbHcc_both_Z_dR_stack_1->SetBinError(21,98521.44);
   VbbHcc_both_Z_dR_stack_1->SetBinError(22,71884.7);
   VbbHcc_both_Z_dR_stack_1->SetBinError(23,71134.88);
   VbbHcc_both_Z_dR_stack_1->SetBinError(24,38012.23);
   VbbHcc_both_Z_dR_stack_1->SetBinError(25,36130.52);
   VbbHcc_both_Z_dR_stack_1->SetBinError(26,25276.95);
   VbbHcc_both_Z_dR_stack_1->SetBinError(27,13619.31);
   VbbHcc_both_Z_dR_stack_1->SetBinError(28,18125.14);
   VbbHcc_both_Z_dR_stack_1->SetBinError(29,9.203153);
   VbbHcc_both_Z_dR_stack_1->SetEntries(567173);

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
   VbbHcc_both_Z_dR_stack_2->SetBinContent(2,28.52045);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(3,45645.96);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(4,91040.72);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(5,108452.2);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(6,132028.2);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(7,154471.6);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(8,175807.4);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(9,196738.5);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(10,218042.1);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(11,240632.9);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(12,264907.4);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(13,290371.3);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(14,315329.4);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(15,338210.7);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(16,331099.1);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(17,174628);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(18,100028.7);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(19,59622.18);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(20,35372.03);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(21,20548.02);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(22,11638.59);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(23,6301.252);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(24,3225.473);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(25,1538.903);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(26,651.3291);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(27,218.4913);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(28,49.38584);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(29,2.690683);
   VbbHcc_both_Z_dR_stack_2->SetBinError(2,1.439945);
   VbbHcc_both_Z_dR_stack_2->SetBinError(3,58.07072);
   VbbHcc_both_Z_dR_stack_2->SetBinError(4,82.2265);
   VbbHcc_both_Z_dR_stack_2->SetBinError(5,89.83079);
   VbbHcc_both_Z_dR_stack_2->SetBinError(6,99.15515);
   VbbHcc_both_Z_dR_stack_2->SetBinError(7,107.2942);
   VbbHcc_both_Z_dR_stack_2->SetBinError(8,114.48);
   VbbHcc_both_Z_dR_stack_2->SetBinError(9,121.1239);
   VbbHcc_both_Z_dR_stack_2->SetBinError(10,127.5375);
   VbbHcc_both_Z_dR_stack_2->SetBinError(11,134.0253);
   VbbHcc_both_Z_dR_stack_2->SetBinError(12,140.6887);
   VbbHcc_both_Z_dR_stack_2->SetBinError(13,147.3834);
   VbbHcc_both_Z_dR_stack_2->SetBinError(14,153.6993);
   VbbHcc_both_Z_dR_stack_2->SetBinError(15,159.2747);
   VbbHcc_both_Z_dR_stack_2->SetBinError(16,157.6913);
   VbbHcc_both_Z_dR_stack_2->SetBinError(17,114.5164);
   VbbHcc_both_Z_dR_stack_2->SetBinError(18,86.62244);
   VbbHcc_both_Z_dR_stack_2->SetBinError(19,66.84708);
   VbbHcc_both_Z_dR_stack_2->SetBinError(20,51.44838);
   VbbHcc_both_Z_dR_stack_2->SetBinError(21,39.15313);
   VbbHcc_both_Z_dR_stack_2->SetBinError(22,29.41203);
   VbbHcc_both_Z_dR_stack_2->SetBinError(23,21.57717);
   VbbHcc_both_Z_dR_stack_2->SetBinError(24,15.35082);
   VbbHcc_both_Z_dR_stack_2->SetBinError(25,10.59457);
   VbbHcc_both_Z_dR_stack_2->SetBinError(26,6.859472);
   VbbHcc_both_Z_dR_stack_2->SetBinError(27,3.914514);
   VbbHcc_both_Z_dR_stack_2->SetBinError(28,1.847726);
   VbbHcc_both_Z_dR_stack_2->SetBinError(29,0.4223505);
   VbbHcc_both_Z_dR_stack_2->SetEntries(4.906418e+07);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_both_17->Modified();
   Z_dR_both_17->cd();
   Z_dR_both_17->SetSelected(Z_dR_both_17);
}
