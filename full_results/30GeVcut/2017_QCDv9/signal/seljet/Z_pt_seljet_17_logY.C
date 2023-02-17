#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_pt_seljet_17_logY()
{
//=========Macro generated from canvas: Z_pt_seljet_17/Z_pt_seljet_17
//=========  (Tue Feb 14 16:07:58 2023) by ROOT version 6.26/06
   TCanvas *Z_pt_seljet_17 = new TCanvas("Z_pt_seljet_17", "Z_pt_seljet_17",0,0,600,600);
   Z_pt_seljet_17->SetHighLightColor(2);
   Z_pt_seljet_17->Range(37.97653,0.02253725,1705.96,4.782347);
   Z_pt_seljet_17->SetFillColor(0);
   Z_pt_seljet_17->SetFillStyle(4000);
   Z_pt_seljet_17->SetBorderMode(0);
   Z_pt_seljet_17->SetBorderSize(2);
   Z_pt_seljet_17->SetLogy();
   Z_pt_seljet_17->SetLeftMargin(0.15709);
   Z_pt_seljet_17->SetRightMargin(0.1234783);
   Z_pt_seljet_17->SetBottomMargin(0.12);
   Z_pt_seljet_17->SetFrameFillStyle(1000);
   Z_pt_seljet_17->SetFrameBorderMode(0);
   Z_pt_seljet_17->SetFrameFillStyle(1000);
   Z_pt_seljet_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(12502.91);
   
   TH1F *st_stack_266 = new TH1F("st_stack_266","",40,0,2000);
   st_stack_266->SetMinimum(3.923868);
   st_stack_266->SetMaximum(20247.24);
   st_stack_266->SetDirectory(0);
   st_stack_266->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_266->SetLineColor(ci);
   st_stack_266->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   st_stack_266->GetXaxis()->SetRange(7,30);
   st_stack_266->GetXaxis()->SetLabelFont(42);
   st_stack_266->GetXaxis()->SetTitleOffset(1);
   st_stack_266->GetXaxis()->SetTitleFont(42);
   st_stack_266->GetYaxis()->SetTitle("Events/50.0");
   st_stack_266->GetYaxis()->SetLabelFont(42);
   st_stack_266->GetYaxis()->SetTitleSize(0.037);
   st_stack_266->GetYaxis()->SetTitleFont(42);
   st_stack_266->GetZaxis()->SetLabelFont(42);
   st_stack_266->GetZaxis()->SetTitleOffset(1);
   st_stack_266->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_266);
   
   
   TH1D *VbbHcc_seljet_Z_pt_stack_1 = new TH1D("VbbHcc_seljet_Z_pt_stack_1","",40,0,2000);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(1,106.02);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(2,125.0291);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(3,30.61575);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(4,7.511768);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(5,2.4474);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(6,0.8927311);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(7,0.4091973);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(8,0.1939224);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(9,0.06861557);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(10,0.03178055);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(11,0.02160933);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(12,0.007778238);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(13,0.0170539);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(14,0.002003342);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(15,0.003856594);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(16,0.002359533);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(17,0.001870372);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(19,0.001639841);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(1,0.4490375);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(2,0.486544);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(3,0.2380845);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(4,0.1173128);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(5,0.0669351);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(6,0.04041789);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(7,0.02729241);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(8,0.0183929);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(9,0.01109986);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(10,0.007474116);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(11,0.006264413);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(12,0.003890826);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(13,0.005541983);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(14,0.002003342);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(15,0.002729717);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(16,0.002359533);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(17,0.001870372);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(19,0.001639841);
   VbbHcc_seljet_Z_pt_stack_1->SetEntries(158880);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_seljet_Z_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Z_pt_stack_1->SetLineColor(ci);
   VbbHcc_seljet_Z_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_seljet_Z_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_pt_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_pt_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Z_pt_stack_1,"");
   
   TH1D *VbbHcc_seljet_Z_pt_stack_2 = new TH1D("VbbHcc_seljet_Z_pt_stack_2","",40,0,2000);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(1,22.63972);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(2,29.72145);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(3,13.00269);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(4,4.251011);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(5,1.456024);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(6,0.5052105);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(7,0.1779105);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(8,0.07599948);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(9,0.02734519);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(10,0.01336046);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(11,0.007506643);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(12,0.001428325);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(13,0.001748713);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(14,0.0007376271);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(15,0.0002639519);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(16,0.0003193896);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(28,0.0002612132);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(1,0.07397413);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(2,0.08470475);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(3,0.05588717);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(4,0.03186924);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(5,0.01862491);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(6,0.01097639);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(7,0.006481831);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(8,0.004245945);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(9,0.00256754);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(10,0.001783981);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(11,0.001342675);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(12,0.0005464534);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(13,0.0006686782);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(14,0.000426456);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(15,0.0002639519);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(16,0.0002490911);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(28,0.0002612132);
   VbbHcc_seljet_Z_pt_stack_2->SetEntries(311458);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_seljet_Z_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Z_pt_stack_2->SetLineColor(ci);
   VbbHcc_seljet_Z_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_seljet_Z_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_pt_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_pt_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Z_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_seljet_Z_pt_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_seljet_Z_pt_stack_1","ZHcc","F");

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
   Z_pt_seljet_17->Modified();
   Z_pt_seljet_17->cd();
   Z_pt_seljet_17->SetSelected(Z_pt_seljet_17);
}
