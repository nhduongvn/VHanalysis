#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_seljet_18_logY()
{
//=========Macro generated from canvas: Z_dR_seljet_18/Z_dR_seljet_18
//=========  (Thu Feb 16 10:37:22 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_seljet_18 = new TCanvas("Z_dR_seljet_18", "Z_dR_seljet_18",0,0,600,600);
   Z_dR_seljet_18->SetHighLightColor(2);
   Z_dR_seljet_18->Range(-1.310117,0.2192794,7.029799,3.900976);
   Z_dR_seljet_18->SetFillColor(0);
   Z_dR_seljet_18->SetFillStyle(4000);
   Z_dR_seljet_18->SetBorderMode(0);
   Z_dR_seljet_18->SetBorderSize(2);
   Z_dR_seljet_18->SetLogy();
   Z_dR_seljet_18->SetLeftMargin(0.15709);
   Z_dR_seljet_18->SetRightMargin(0.1234783);
   Z_dR_seljet_18->SetBottomMargin(0.12);
   Z_dR_seljet_18->SetFrameFillStyle(1000);
   Z_dR_seljet_18->SetFrameBorderMode(0);
   Z_dR_seljet_18->SetFrameFillStyle(1000);
   Z_dR_seljet_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(2315.398);
   
   TH1F *st_stack_275 = new TH1F("st_stack_275","",30,0,6);
   st_stack_275->SetMinimum(4.582295);
   st_stack_275->SetMaximum(3410.407);
   st_stack_275->SetDirectory(0);
   st_stack_275->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_275->SetLineColor(ci);
   st_stack_275->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_275->GetXaxis()->SetRange(1,30);
   st_stack_275->GetXaxis()->SetLabelFont(42);
   st_stack_275->GetXaxis()->SetTitleOffset(1);
   st_stack_275->GetXaxis()->SetTitleFont(42);
   st_stack_275->GetYaxis()->SetTitle("Events/0.2");
   st_stack_275->GetYaxis()->SetLabelFont(42);
   st_stack_275->GetYaxis()->SetTitleSize(0.037);
   st_stack_275->GetYaxis()->SetTitleFont(42);
   st_stack_275->GetZaxis()->SetLabelFont(42);
   st_stack_275->GetZaxis()->SetTitleOffset(1);
   st_stack_275->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_275);
   
   
   TH1D *VbbHcc_seljet_Z_dR_stack_1 = new TH1D("VbbHcc_seljet_Z_dR_stack_1","",30,0,6);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(2,0.01120728);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(3,3.432877);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(4,5.853441);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(5,6.560663);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(6,7.669359);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(7,8.693658);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(8,9.09238);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(9,10.06092);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(10,10.12334);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(11,10.9579);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(12,12.44728);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(13,14.24608);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(14,15.46664);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(15,16.99451);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(16,16.82276);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(17,7.028532);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(18,3.730057);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(19,2.251766);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(20,1.499951);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(21,0.9789812);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(22,0.6041833);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(23,0.3794867);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(24,0.23093);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(25,0.1166831);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(26,0.06094835);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(27,0.0202468);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(28,0.002736771);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(2,0.005650647);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(3,0.09685265);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(4,0.1695101);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(5,0.1718488);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(6,0.1528258);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(7,0.1719006);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(8,0.1600014);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(9,0.1753541);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(10,0.1717508);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(11,0.2114374);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(12,0.1886267);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(13,0.2114419);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(14,0.2386146);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(15,0.2250391);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(16,0.2240346);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(17,0.14162);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(18,0.1006505);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(19,0.07938599);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(20,0.06310614);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(21,0.05203346);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(22,0.04134136);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(23,0.03176982);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(24,0.02439921);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(25,0.01762396);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(26,0.01246778);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(27,0.006937236);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(28,0.002736771);
   VbbHcc_seljet_Z_dR_stack_1->SetEntries(65138);

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
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(2,0.0006890299);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(3,1.157137);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(4,2.068045);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(5,2.58604);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(6,3.22283);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(7,3.407553);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(8,3.504976);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(9,3.703455);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(10,4.037986);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(11,4.411522);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(12,4.772467);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(13,5.207491);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(14,5.609454);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(15,6.159463);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(16,6.114037);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(17,3.049419);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(18,1.727487);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(19,1.047564);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(20,0.6540745);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(21,0.4179841);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(22,0.278307);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(23,0.1703123);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(24,0.09737358);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(25,0.05368264);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(26,0.02358101);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(27,0.01495097);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(28,0.002177166);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(2,0.0004872582);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(3,0.02184385);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(4,0.0283994);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(5,0.03069174);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(6,0.03566936);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(7,0.03626844);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(8,0.03670157);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(9,0.04058903);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(10,0.03943606);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(11,0.04367164);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(12,0.04253904);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(13,0.04472041);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(14,0.04670731);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(15,0.04934748);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(16,0.04788438);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(17,0.03701113);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(18,0.02574723);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(19,0.01956336);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(20,0.01559992);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(21,0.01265939);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(22,0.009950565);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(23,0.007740574);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(24,0.006218882);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(25,0.004372549);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(26,0.002831707);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(27,0.002326491);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(28,0.0008665521);
   VbbHcc_seljet_Z_dR_stack_2->SetEntries(186422);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_seljet_18->Modified();
   Z_dR_seljet_18->cd();
   Z_dR_seljet_18->SetSelected(Z_dR_seljet_18);
}
