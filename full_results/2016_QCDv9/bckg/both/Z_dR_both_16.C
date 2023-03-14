#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_both_16()
{
//=========Macro generated from canvas: Z_dR_both_16/Z_dR_both_16
//=========  (Thu Mar  9 13:18:51 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_both_16 = new TCanvas("Z_dR_both_16", "Z_dR_both_16",0,0,600,600);
   Z_dR_both_16->SetHighLightColor(2);
   Z_dR_both_16->Range(-1.310117,-99535.81,7.029799,729929.3);
   Z_dR_both_16->SetFillColor(0);
   Z_dR_both_16->SetFillStyle(4000);
   Z_dR_both_16->SetBorderMode(0);
   Z_dR_both_16->SetBorderSize(2);
   Z_dR_both_16->SetLeftMargin(0.15709);
   Z_dR_both_16->SetRightMargin(0.1234783);
   Z_dR_both_16->SetBottomMargin(0.12);
   Z_dR_both_16->SetFrameFillStyle(1000);
   Z_dR_both_16->SetFrameBorderMode(0);
   Z_dR_both_16->SetFrameFillStyle(1000);
   Z_dR_both_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(646982.8);
   
   TH1F *st_stack_145 = new TH1F("st_stack_145","",30,0,6);
   st_stack_145->SetMinimum(0);
   st_stack_145->SetMaximum(646982.8);
   st_stack_145->SetDirectory(0);
   st_stack_145->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_145->SetLineColor(ci);
   st_stack_145->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_145->GetXaxis()->SetRange(1,30);
   st_stack_145->GetXaxis()->SetLabelFont(42);
   st_stack_145->GetXaxis()->SetTitleOffset(1);
   st_stack_145->GetXaxis()->SetTitleFont(42);
   st_stack_145->GetYaxis()->SetTitle("Event/0.2");
   st_stack_145->GetYaxis()->SetLabelFont(42);
   st_stack_145->GetYaxis()->SetTitleSize(0.037);
   st_stack_145->GetYaxis()->SetTitleFont(42);
   st_stack_145->GetZaxis()->SetLabelFont(42);
   st_stack_145->GetZaxis()->SetTitleOffset(1);
   st_stack_145->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_145);
   
   
   TH1D *VbbHcc_both_Z_dR_stack_1 = new TH1D("VbbHcc_both_Z_dR_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(2,183.009);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(3,504744.6);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(4,517351.8);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(5,419193.4);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(6,337607.6);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(7,302093.7);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(8,237633.5);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(9,289613.3);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(10,251239.1);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(11,246891);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(12,255789.4);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(13,288669.7);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(14,348417.7);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(15,396892.7);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(16,419145.4);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(17,221235.6);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(18,137730.2);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(19,87018.47);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(20,83315.23);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(21,43741.72);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(22,25346.19);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(23,18678.06);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(24,11947.49);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(25,5267.98);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(26,2930.264);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(27,789.5613);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(28,43.45202);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(29,0.3520729);
   VbbHcc_both_Z_dR_stack_1->SetBinError(2,56.1848);
   VbbHcc_both_Z_dR_stack_1->SetBinError(3,12504.6);
   VbbHcc_both_Z_dR_stack_1->SetBinError(4,14728.87);
   VbbHcc_both_Z_dR_stack_1->SetBinError(5,26119.28);
   VbbHcc_both_Z_dR_stack_1->SetBinError(6,12615.2);
   VbbHcc_both_Z_dR_stack_1->SetBinError(7,12327.13);
   VbbHcc_both_Z_dR_stack_1->SetBinError(8,8714.814);
   VbbHcc_both_Z_dR_stack_1->SetBinError(9,24499.49);
   VbbHcc_both_Z_dR_stack_1->SetBinError(10,10639.55);
   VbbHcc_both_Z_dR_stack_1->SetBinError(11,10751.78);
   VbbHcc_both_Z_dR_stack_1->SetBinError(12,10643.79);
   VbbHcc_both_Z_dR_stack_1->SetBinError(13,11540.45);
   VbbHcc_both_Z_dR_stack_1->SetBinError(14,26616.14);
   VbbHcc_both_Z_dR_stack_1->SetBinError(15,33009.74);
   VbbHcc_both_Z_dR_stack_1->SetBinError(16,30919.68);
   VbbHcc_both_Z_dR_stack_1->SetBinError(17,10559.01);
   VbbHcc_both_Z_dR_stack_1->SetBinError(18,8507.929);
   VbbHcc_both_Z_dR_stack_1->SetBinError(19,5866.207);
   VbbHcc_both_Z_dR_stack_1->SetBinError(20,20227.29);
   VbbHcc_both_Z_dR_stack_1->SetBinError(21,4497.129);
   VbbHcc_both_Z_dR_stack_1->SetBinError(22,3475.84);
   VbbHcc_both_Z_dR_stack_1->SetBinError(23,2756.857);
   VbbHcc_both_Z_dR_stack_1->SetBinError(24,2672.335);
   VbbHcc_both_Z_dR_stack_1->SetBinError(25,1708.38);
   VbbHcc_both_Z_dR_stack_1->SetBinError(26,1560.369);
   VbbHcc_both_Z_dR_stack_1->SetBinError(27,383.1534);
   VbbHcc_both_Z_dR_stack_1->SetBinError(28,27.98461);
   VbbHcc_both_Z_dR_stack_1->SetBinError(29,0.3520729);
   VbbHcc_both_Z_dR_stack_1->SetEntries(256983);

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
   VbbHcc_both_Z_dR_stack_2->SetBinContent(2,10.39518);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(3,10378.14);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(4,19643.87);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(5,23992.18);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(6,28724.81);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(7,32976.24);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(8,36862.65);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(9,41350.22);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(10,46745.69);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(11,53463.61);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(12,61527.46);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(13,70562.96);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(14,79935.85);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(15,88475.74);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(16,88274.86);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(17,45013.72);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(18,24794.39);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(19,14110.4);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(20,8009.306);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(21,4432.427);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(22,2397.825);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(23,1237.762);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(24,611.077);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(25,270.4418);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(26,107.1891);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(27,38.39426);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(28,7.879666);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(29,0.3697389);
   VbbHcc_both_Z_dR_stack_2->SetBinError(2,0.8402618);
   VbbHcc_both_Z_dR_stack_2->SetBinError(3,26.69939);
   VbbHcc_both_Z_dR_stack_2->SetBinError(4,36.79458);
   VbbHcc_both_Z_dR_stack_2->SetBinError(5,40.70464);
   VbbHcc_both_Z_dR_stack_2->SetBinError(6,44.55148);
   VbbHcc_both_Z_dR_stack_2->SetBinError(7,47.7139);
   VbbHcc_both_Z_dR_stack_2->SetBinError(8,50.44191);
   VbbHcc_both_Z_dR_stack_2->SetBinError(9,53.43268);
   VbbHcc_both_Z_dR_stack_2->SetBinError(10,56.82558);
   VbbHcc_both_Z_dR_stack_2->SetBinError(11,60.81954);
   VbbHcc_both_Z_dR_stack_2->SetBinError(12,65.32623);
   VbbHcc_both_Z_dR_stack_2->SetBinError(13,70.04068);
   VbbHcc_both_Z_dR_stack_2->SetBinError(14,74.66256);
   VbbHcc_both_Z_dR_stack_2->SetBinError(15,78.67271);
   VbbHcc_both_Z_dR_stack_2->SetBinError(16,78.68878);
   VbbHcc_both_Z_dR_stack_2->SetBinError(17,56.23959);
   VbbHcc_both_Z_dR_stack_2->SetBinError(18,41.77471);
   VbbHcc_both_Z_dR_stack_2->SetBinError(19,31.52016);
   VbbHcc_both_Z_dR_stack_2->SetBinError(20,23.73128);
   VbbHcc_both_Z_dR_stack_2->SetBinError(21,17.64421);
   VbbHcc_both_Z_dR_stack_2->SetBinError(22,12.92762);
   VbbHcc_both_Z_dR_stack_2->SetBinError(23,9.270976);
   VbbHcc_both_Z_dR_stack_2->SetBinError(24,6.478784);
   VbbHcc_both_Z_dR_stack_2->SetBinError(25,4.30786);
   VbbHcc_both_Z_dR_stack_2->SetBinError(26,2.699366);
   VbbHcc_both_Z_dR_stack_2->SetBinError(27,1.569853);
   VbbHcc_both_Z_dR_stack_2->SetBinError(28,0.7245131);
   VbbHcc_both_Z_dR_stack_2->SetBinError(29,0.1537335);
   VbbHcc_both_Z_dR_stack_2->SetEntries(1.206718e+07);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_both_16->Modified();
   Z_dR_both_16->cd();
   Z_dR_both_16->SetSelected(Z_dR_both_16);
}
