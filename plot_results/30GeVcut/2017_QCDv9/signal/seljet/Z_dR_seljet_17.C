#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_seljet_17()
{
//=========Macro generated from canvas: Z_dR_seljet_17/Z_dR_seljet_17
//=========  (Tue Feb 14 15:57:12 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_seljet_17 = new TCanvas("Z_dR_seljet_17", "Z_dR_seljet_17",0,0,600,600);
   Z_dR_seljet_17->SetHighLightColor(2);
   Z_dR_seljet_17->Range(-1.310117,-7.500093,7.029799,55.00068);
   Z_dR_seljet_17->SetFillColor(0);
   Z_dR_seljet_17->SetFillStyle(4000);
   Z_dR_seljet_17->SetBorderMode(0);
   Z_dR_seljet_17->SetBorderSize(2);
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
   st->SetMaximum(48.7506);
   
   TH1F *st_stack_274 = new TH1F("st_stack_274","",30,0,6);
   st_stack_274->SetMinimum(0);
   st_stack_274->SetMaximum(48.7506);
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
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(2,0.005708055);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(3,5.767076);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(4,10.15888);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(5,11.21943);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(6,12.84307);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(7,14.6181);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(8,16.04276);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(9,17.53764);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(10,18.73189);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(11,19.77527);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(12,21.11132);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(13,22.41145);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(14,24.217);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(15,25.81123);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(16,24.88719);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(17,11.58361);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(18,6.273222);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(19,3.659207);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(20,2.49597);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(21,1.615795);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(22,1.09492);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(23,0.6544784);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(24,0.3934505);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(25,0.2411578);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(26,0.0754505);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(27,0.03961554);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(28,0.009871585);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(29,0.003690872);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(2,0.003299571);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(3,0.104344);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(4,0.1378275);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(5,0.1453406);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(6,0.1553368);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(7,0.1658348);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(8,0.1743536);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(9,0.1817873);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(10,0.1881672);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(11,0.1929928);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(12,0.2005947);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(13,0.2062856);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(14,0.2142411);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(15,0.2213839);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(16,0.2176447);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(17,0.147827);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(18,0.1085531);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(19,0.08206649);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(20,0.067726);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(21,0.05428073);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(22,0.04462925);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(23,0.03485255);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(24,0.02655553);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(25,0.02075229);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(26,0.01123027);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(27,0.008636073);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(28,0.004042624);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(29,0.002616379);
   VbbHcc_seljet_Z_dR_stack_1->SetEntries(158880);

   ci = TColor::GetColor("#cc0000");
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
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(2,0.002398049);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(3,1.258276);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(4,2.343157);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(5,2.77226);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(6,3.330763);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(7,3.774168);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(8,4.115402);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(9,4.489768);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(10,4.735277);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(11,5.083933);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(12,5.534098);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(13,5.923897);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(14,6.347774);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(15,6.689175);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(16,6.612721);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(17,3.415041);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(18,2.018169);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(19,1.262978);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(20,0.8140048);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(21,0.5524604);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(22,0.3467317);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(23,0.210237);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(24,0.1294359);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(25,0.06872412);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(26,0.03100802);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(27,0.01565797);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(28,0.004899011);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(29,0.0005734457);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(2,0.0007595881);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(3,0.0174232);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(4,0.0237221);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(5,0.02581696);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(6,0.028336);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(7,0.03014143);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(8,0.03147919);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(9,0.03290621);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(10,0.03376557);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(11,0.03502911);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(12,0.03653812);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(13,0.03781381);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(14,0.03918451);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(15,0.04014746);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(16,0.03997554);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(17,0.02869158);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(18,0.02206427);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(19,0.01742061);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(20,0.01394469);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(21,0.01145105);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(22,0.009095372);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(23,0.00706415);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(24,0.005500703);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(25,0.00400998);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(26,0.002693785);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(27,0.001921574);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(28,0.001064209);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(29,0.0003320553);
   VbbHcc_seljet_Z_dR_stack_2->SetEntries(311458);

   ci = TColor::GetColor("#00cc00");
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
   TLegendEntry *entry=leg->AddEntry("VbbHcc_seljet_Z_dR_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
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
   entry=leg->AddEntry("VbbHcc_seljet_Z_dR_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
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
