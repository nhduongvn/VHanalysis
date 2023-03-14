#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_both_16_logY()
{
//=========Macro generated from canvas: Aplanarity_both_16/Aplanarity_both_16
//=========  (Thu Mar  9 13:18:03 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_both_16 = new TCanvas("Aplanarity_both_16", "Aplanarity_both_16",0,0,600,600);
   Aplanarity_both_16->SetHighLightColor(2);
   Aplanarity_both_16->Range(-0.2183529,-0.5661267,1.171633,7.684238);
   Aplanarity_both_16->SetFillColor(0);
   Aplanarity_both_16->SetFillStyle(4000);
   Aplanarity_both_16->SetBorderMode(0);
   Aplanarity_both_16->SetBorderSize(2);
   Aplanarity_both_16->SetLogy();
   Aplanarity_both_16->SetLeftMargin(0.15709);
   Aplanarity_both_16->SetRightMargin(0.1234783);
   Aplanarity_both_16->SetBottomMargin(0.12);
   Aplanarity_both_16->SetFrameFillStyle(1000);
   Aplanarity_both_16->SetFrameBorderMode(0);
   Aplanarity_both_16->SetFrameFillStyle(1000);
   Aplanarity_both_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(3431750);
   
   TH1F *st_stack_189 = new TH1F("st_stack_189","",50,0,1);
   st_stack_189->SetMinimum(2.654098);
   st_stack_189->SetMaximum(7231051);
   st_stack_189->SetDirectory(0);
   st_stack_189->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_189->SetLineColor(ci);
   st_stack_189->GetXaxis()->SetTitle("Aplanarity");
   st_stack_189->GetXaxis()->SetRange(1,50);
   st_stack_189->GetXaxis()->SetLabelFont(42);
   st_stack_189->GetXaxis()->SetTitleOffset(1);
   st_stack_189->GetXaxis()->SetTitleFont(42);
   st_stack_189->GetYaxis()->SetTitle("Event/0.02");
   st_stack_189->GetYaxis()->SetLabelFont(42);
   st_stack_189->GetYaxis()->SetTitleSize(0.037);
   st_stack_189->GetYaxis()->SetTitleFont(42);
   st_stack_189->GetZaxis()->SetLabelFont(42);
   st_stack_189->GetZaxis()->SetTitleOffset(1);
   st_stack_189->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_189);
   
   
   TH1D *VbbHcc_both_Aplanarity_stack_1 = new TH1D("VbbHcc_both_Aplanarity_stack_1","",50,0,1);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(1,2609762);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(2,1288032);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(3,601307.6);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(4,362256.4);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(5,232596);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(6,128492.2);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(7,75406.33);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(8,58922.57);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(9,35966.47);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(10,23344.77);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(11,12505.97);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(12,7072.914);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(13,7960.739);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(14,3627.142);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(15,3108.691);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(16,1493.622);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(17,129.9808);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(18,1152.855);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(19,67.30862);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(20,304.9679);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(1,39314.12);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(2,51396.5);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(3,17673.58);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(4,26364.59);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(5,23999.9);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(6,7964.882);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(7,5953.899);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(8,5893.413);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(9,4255.004);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(10,3864.553);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(11,2499.492);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(12,1211.349);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(13,1985.018);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(14,907.6763);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(15,893.3111);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(16,600.5145);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(17,44.6707);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(18,1054.987);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(19,29.95577);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(20,291.907);
   VbbHcc_both_Aplanarity_stack_1->SetEntries(256983);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_2 = new TH1D("VbbHcc_both_Aplanarity_stack_2","",50,0,1);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(0,0.06515573);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(1,238590.2);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(2,170028.2);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(3,112850.9);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(4,76671.56);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(5,53370.13);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(6,38010.29);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(7,27175.22);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(8,19659.31);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(9,14259.76);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(10,10292.04);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(11,7378.632);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(12,5229.66);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(13,3660.333);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(14,2517.245);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(15,1677.929);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(16,1097.46);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(17,677.3793);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(18,406.2789);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(19,218.9173);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(20,110.6748);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(21,49.62862);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(22,19.24182);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(23,4.412318);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(24,0.3765654);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(25,0.07709436);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(0,0.05542727);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(1,128.1524);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(2,108.6763);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(3,88.72935);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(4,73.24215);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(5,61.18442);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(6,51.68007);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(7,43.72119);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(8,37.20296);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(9,31.71247);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(10,26.94314);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(11,22.82438);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(12,19.22936);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(13,16.08736);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(14,13.34378);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(15,10.90597);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(16,8.820739);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(17,6.933932);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(18,5.363606);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(19,3.941127);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(20,2.808141);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(21,1.881318);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(22,1.163542);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(23,0.5646285);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(24,0.1476049);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(25,0.07709436);
   VbbHcc_both_Aplanarity_stack_2->SetEntries(1.206718e+07);

   ci = TColor::GetColor("#990099");
   VbbHcc_both_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_1","QCD","F");

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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_both_16->Modified();
   Aplanarity_both_16->cd();
   Aplanarity_both_16->SetSelected(Aplanarity_both_16);
}
