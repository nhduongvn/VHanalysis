#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_alljet_all()
{
//=========Macro generated from canvas: Z_dR_alljet_all/Z_dR_alljet_all
//=========  (Tue Feb 14 16:10:12 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_alljet_all = new TCanvas("Z_dR_alljet_all", "Z_dR_alljet_all",0,0,600,600);
   Z_dR_alljet_all->SetHighLightColor(2);
   Z_dR_alljet_all->Range(-1.310117,-4.715516e+10,7.029799,3.458045e+11);
   Z_dR_alljet_all->SetFillColor(0);
   Z_dR_alljet_all->SetFillStyle(4000);
   Z_dR_alljet_all->SetBorderMode(0);
   Z_dR_alljet_all->SetBorderSize(2);
   Z_dR_alljet_all->SetLeftMargin(0.15709);
   Z_dR_alljet_all->SetRightMargin(0.1234783);
   Z_dR_alljet_all->SetBottomMargin(0.12);
   Z_dR_alljet_all->SetFrameFillStyle(1000);
   Z_dR_alljet_all->SetFrameBorderMode(0);
   Z_dR_alljet_all->SetFrameFillStyle(1000);
   Z_dR_alljet_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(3.065085e+11);
   
   TH1F *st_stack_212 = new TH1F("st_stack_212","",30,0,6);
   st_stack_212->SetMinimum(0);
   st_stack_212->SetMaximum(3.065085e+11);
   st_stack_212->SetDirectory(0);
   st_stack_212->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_212->SetLineColor(ci);
   st_stack_212->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_212->GetXaxis()->SetRange(1,30);
   st_stack_212->GetXaxis()->SetLabelFont(42);
   st_stack_212->GetXaxis()->SetTitleOffset(1);
   st_stack_212->GetXaxis()->SetTitleFont(42);
   st_stack_212->GetYaxis()->SetTitle("Events/0.2");
   st_stack_212->GetYaxis()->SetLabelFont(42);
   st_stack_212->GetYaxis()->SetTitleSize(0.037);
   st_stack_212->GetYaxis()->SetTitleFont(42);
   st_stack_212->GetZaxis()->SetLabelFont(42);
   st_stack_212->GetZaxis()->SetTitleOffset(1);
   st_stack_212->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_212);
   
   
   TH1D *VbbHcc_alljet_Z_dR_all_stack_1 = new TH1D("VbbHcc_alljet_Z_dR_all_stack_1","",30,0,6);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(2,7.203927e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(3,3.890786e+10);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(4,9.45178e+10);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(5,7.923129e+10);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(6,8.495177e+10);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(7,9.387011e+10);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(8,1.027911e+11);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(9,1.127305e+11);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(10,1.236321e+11);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(11,1.356986e+11);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(12,1.486876e+11);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(13,1.627166e+11);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(14,1.780914e+11);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(15,1.948748e+11);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(16,2.043296e+11);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(17,1.605139e+11);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(18,1.376049e+11);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(19,1.22579e+11);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(20,1.111196e+11);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(21,1.018123e+11);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(22,9.373032e+10);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(23,8.627641e+10);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(24,7.905688e+10);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(25,7.25839e+10);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(26,6.706392e+10);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(27,6.252433e+10);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(28,5.929128e+10);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(29,5.508991e+10);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(30,5.033085e+10);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(31,3.118656e+11);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(2,1263084);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(3,2.940395e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(4,4.571141e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(5,4.186661e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(6,4.343717e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(7,4.558328e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(8,4.772564e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(9,5.004968e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(10,5.240019e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(11,5.50447e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(12,5.760086e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(13,6.03215e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(14,6.317633e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(15,6.600662e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(16,6.761589e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(17,5.997989e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(18,5.563957e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(19,5.241553e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(20,4.999723e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(21,4.771377e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(22,4.585306e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(23,4.397252e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(24,4.206041e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(25,4.030146e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(26,3.882154e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(27,3.743643e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(28,3.647808e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(29,3.50807e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(30,3.363541e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(31,8.365331e+07);
   VbbHcc_alljet_Z_dR_all_stack_1->SetEntries(6.836464e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_alljet_Z_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_Z_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_alljet_Z_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_alljet_Z_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_dR_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Z_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_Z_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_Z_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_dR_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Z_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_Z_dR_all_stack_1,"");
   
   TH1D *VbbHcc_alljet_Z_dR_all_stack_2 = new TH1D("VbbHcc_alljet_Z_dR_all_stack_2","",30,0,6);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(2,1983.116);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(3,1662293);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(4,3335817);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(5,4051642);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(6,5006786);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(7,5858422);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(8,6556070);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(9,7118467);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(10,7582177);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(11,8003369);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(12,8414732);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(13,8828605);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(14,9238347);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(15,9630851);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(16,9412357);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(17,5795290);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(18,4028160);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(19,3003513);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(20,2313883);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(21,1819542);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(22,1449831);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(23,1164524);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(24,939899.8);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(25,760303.9);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(26,615738);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(27,498272.2);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(28,402102.8);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(29,321810.7);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(30,255770);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(31,858676.3);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(2,12.49319);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(3,357.5105);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(4,505.3462);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(5,559.4645);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(6,623.1862);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(7,673.9193);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(8,712.2241);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(9,741.9841);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(10,764.9924);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(11,786.2149);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(12,805.3);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(13,825.2427);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(14,845.2126);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(15,864.0831);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(16,854.1882);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(17,666.7037);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(18,552.763);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(19,474.7351);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(20,415.1041);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(21,366.0939);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(22,325.1098);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(23,289.9123);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(24,259.638);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(25,232.4888);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(26,207.9037);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(27,186.7386);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(28,166.7231);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(29,148.6742);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(30,132.0699);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(31,238.6105);
   VbbHcc_alljet_Z_dR_all_stack_2->SetEntries(1.849221e+09);

   ci = TColor::GetColor("#990099");
   VbbHcc_alljet_Z_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_Z_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_alljet_Z_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_alljet_Z_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_dR_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Z_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_Z_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_Z_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_dR_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Z_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_Z_dR_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_alljet_Z_dR_all_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_alljet_Z_dR_all_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_alljet_all->Modified();
   Z_dR_alljet_all->cd();
   Z_dR_alljet_all->SetSelected(Z_dR_alljet_all);
}
