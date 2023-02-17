#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_seljet_17_logY()
{
//=========Macro generated from canvas: H_dR_seljet_17/H_dR_seljet_17
//=========  (Tue Feb 14 16:02:05 2023) by ROOT version 6.26/06
   TCanvas *H_dR_seljet_17 = new TCanvas("H_dR_seljet_17", "H_dR_seljet_17",0,0,600,600);
   H_dR_seljet_17->SetHighLightColor(2);
   H_dR_seljet_17->Range(-1.353788,-0.08853865,7.264125,13.23557);
   H_dR_seljet_17->SetFillColor(0);
   H_dR_seljet_17->SetFillStyle(4000);
   H_dR_seljet_17->SetBorderMode(0);
   H_dR_seljet_17->SetBorderSize(2);
   H_dR_seljet_17->SetLogy();
   H_dR_seljet_17->SetLeftMargin(0.15709);
   H_dR_seljet_17->SetRightMargin(0.1234783);
   H_dR_seljet_17->SetBottomMargin(0.12);
   H_dR_seljet_17->SetFrameFillStyle(1000);
   H_dR_seljet_17->SetFrameBorderMode(0);
   H_dR_seljet_17->SetFrameFillStyle(1000);
   H_dR_seljet_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(181.2289);
   st->SetMaximum(2.81899e+11);
   
   TH1F *st_stack_278 = new TH1F("st_stack_278","",30,0,6);
   st_stack_278->SetMinimum(32.38582);
   st_stack_278->SetMaximum(8.001347e+11);
   st_stack_278->SetDirectory(0);
   st_stack_278->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_278->SetLineColor(ci);
   st_stack_278->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_278->GetXaxis()->SetRange(1,31);
   st_stack_278->GetXaxis()->SetLabelFont(42);
   st_stack_278->GetXaxis()->SetTitleOffset(1);
   st_stack_278->GetXaxis()->SetTitleFont(42);
   st_stack_278->GetYaxis()->SetTitle("Events/0.2");
   st_stack_278->GetYaxis()->SetLabelFont(42);
   st_stack_278->GetYaxis()->SetTitleSize(0.037);
   st_stack_278->GetYaxis()->SetTitleFont(42);
   st_stack_278->GetZaxis()->SetLabelFont(42);
   st_stack_278->GetZaxis()->SetTitleOffset(1);
   st_stack_278->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_278);
   
   
   TH1D *VbbHcc_seljet_H_dR_stack_1 = new TH1D("VbbHcc_seljet_H_dR_stack_1","",30,0,6);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(2,181107.1);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(3,1.259236e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(4,1.993919e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(5,1.74031e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(6,1.808132e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(7,2.050574e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(8,2.459737e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(9,3.142902e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(10,4.188366e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(11,5.823652e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(12,8.269833e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(13,1.195435e+09);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(14,1.703202e+09);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(15,2.350282e+09);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(16,2.815688e+09);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(17,1.780433e+09);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(18,1.246918e+09);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(19,9.040005e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(20,6.669526e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(21,4.826404e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(22,3.395909e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(23,2.298362e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(24,1.512125e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(25,8.952335e+07);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(26,4.635207e+07);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(27,2.008219e+07);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(28,5493428);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(29,269746.3);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(2,42509.97);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(3,929418.7);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(4,1274631);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(5,1221732);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(6,1236785);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(7,1308159);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(8,1408359);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(9,1563260);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(10,1751967);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(11,2003242);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(12,2315748);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(13,2732098);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(14,3194280);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(15,3697889);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(16,4017056);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(17,3217406);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(18,2720202);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(19,2320107);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(20,2026072);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(21,1729510);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(22,1459888);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(23,1205898);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(24,991869.9);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(25,769319.1);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(26,550336.5);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(27,369033.2);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(28,194326.6);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(29,35371.11);
   VbbHcc_seljet_H_dR_stack_1->SetEntries(7.180466e+07);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_seljet_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_seljet_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_seljet_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_H_dR_stack_1,"");
   
   TH1D *VbbHcc_seljet_H_dR_stack_2 = new TH1D("VbbHcc_seljet_H_dR_stack_2","",30,0,6);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(2,121.7562);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(3,152745);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(4,349324.1);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(5,476559.8);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(6,575657.6);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(7,638504);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(8,697523.3);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(9,789419.1);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(10,941496.3);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(11,1170943);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(12,1496443);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(13,1933145);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(14,2472186);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(15,3065144);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(16,3302818);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(17,1698927);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(18,971492.4);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(19,590814.9);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(20,362536.1);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(21,220750.8);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(22,132263.2);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(23,76897.68);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(24,42533.96);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(25,21716.17);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(26,9812.532);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(27,3644.131);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(28,855.7757);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(29,48.55025);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(2,2.828595);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(3,101.3065);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(4,154.3025);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(5,180.7754);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(6,199.0379);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(7,210.103);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(8,220.2649);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(9,235.0766);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(10,257.5886);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(11,288.2994);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(12,327.0376);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(13,372.9294);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(14,423.0445);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(15,472.3313);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(16,491.1486);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(17,351.3113);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(18,264.7149);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(19,205.627);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(20,160.3494);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(21,124.493);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(22,95.77894);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(23,72.5426);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(24,53.57567);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(25,37.94606);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(26,25.23996);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(27,15.15182);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(28,7.167363);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(29,1.673124);
   VbbHcc_seljet_H_dR_stack_2->SetEntries(3.421877e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_seljet_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_seljet_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_seljet_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_H_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_seljet_H_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_seljet_H_dR_stack_1","QCD","F");

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
   H_dR_seljet_17->Modified();
   H_dR_seljet_17->cd();
   H_dR_seljet_17->SetSelected(H_dR_seljet_17);
}
