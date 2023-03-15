#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_seljet_17_logY()
{
//=========Macro generated from canvas: Z_dR_seljet_17/Z_dR_seljet_17
//=========  (Tue Feb 14 16:02:05 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_seljet_17 = new TCanvas("Z_dR_seljet_17", "Z_dR_seljet_17",0,0,600,600);
   Z_dR_seljet_17->SetHighLightColor(2);
   Z_dR_seljet_17->Range(-1.310117,-0.0507027,7.029799,12.93418);
   Z_dR_seljet_17->SetFillColor(0);
   Z_dR_seljet_17->SetFillStyle(4000);
   Z_dR_seljet_17->SetBorderMode(0);
   Z_dR_seljet_17->SetBorderSize(2);
   Z_dR_seljet_17->SetLogy();
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
   st->SetMinimum(176.0572);
   st->SetMaximum(1.549743e+11);
   
   TH1F *st_stack_274 = new TH1F("st_stack_274","",30,0,6);
   st_stack_274->SetMinimum(32.17242);
   st_stack_274->SetMaximum(4.32211e+11);
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
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(2,452847.7);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(3,4.791737e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(4,8.891468e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(5,7.35144e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(6,7.258717e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(7,7.458192e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(8,7.805296e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(9,8.376098e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(10,9.060907e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(11,9.897649e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(12,1.101359e+09);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(13,1.224585e+09);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(14,1.360305e+09);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(15,1.501005e+09);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(16,1.547946e+09);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(17,1.002817e+09);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(18,7.155036e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(19,5.331824e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(20,3.982844e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(21,2.941759e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(22,2.082367e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(23,1.421507e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(24,8.914978e+07);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(25,5.257672e+07);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(26,2.616069e+07);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(27,1.14649e+07);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(28,3076543);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(29,176001.1);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(2,37546.97);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(3,1457514);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(4,2191375);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(5,2028360);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(6,2037205);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(7,2065868);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(8,2135388);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(9,2244014);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(10,2337809);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(11,2444078);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(12,2601146);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(13,2755482);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(14,2943977);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(15,3128743);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(16,3222986);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(17,2588416);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(18,2191798);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(19,1902357);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(20,1660672);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(21,1440267);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(22,1214767);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(23,1001783);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(24,793538.1);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(25,626350.9);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(26,427325.2);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(27,294378);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(28,146468.1);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(29,27107.64);
   VbbHcc_seljet_Z_dR_stack_1->SetEntries(7.180466e+07);

   ci = TColor::GetColor("#ff6600");
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
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(2,366.795);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(3,375212.7);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(4,751720.7);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(5,913773.9);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(6,1120736);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(7,1297049);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(8,1429247);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(9,1521654);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(10,1585161);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(11,1639150);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(12,1694822);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(13,1753559);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(14,1814457);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(15,1874424);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(16,1796592);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(17,971537.4);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(18,593305.4);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(19,387183.9);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(20,256579.4);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(21,168490.5);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(22,108375.2);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(23,67044.22);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(24,38938.52);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(25,20439.91);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(26,9648.076);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(27,3812.738);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(28,987.8839);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(29,56.1127);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(2,5.021283);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(3,161.9701);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(4,230.5094);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(5,255.278);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(6,283.0538);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(7,304.5205);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(8,319.5286);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(9,329.5885);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(10,336.4304);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(11,342.345);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(12,348.5189);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(13,355.0699);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(14,361.7671);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(15,368.2886);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(16,360.8912);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(17,264.6156);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(18,206.0698);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(19,165.8323);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(20,134.4367);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(21,108.468);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(22,86.62304);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(23,67.81202);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(24,51.4611);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(25,37.13998);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(26,25.40794);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(27,15.85492);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(28,7.992933);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(29,1.89882);
   VbbHcc_seljet_Z_dR_stack_2->SetEntries(3.421877e+08);

   ci = TColor::GetColor("#990099");
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
   TLegendEntry *entry=leg->AddEntry("VbbHcc_seljet_Z_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_seljet_Z_dR_stack_1","QCD","F");

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
   Z_dR_seljet_17->Modified();
   Z_dR_seljet_17->cd();
   Z_dR_seljet_17->SetSelected(Z_dR_seljet_17);
}
