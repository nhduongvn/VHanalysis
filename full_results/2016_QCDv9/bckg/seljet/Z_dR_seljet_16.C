#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_seljet_16()
{
//=========Macro generated from canvas: Z_dR_seljet_16/Z_dR_seljet_16
//=========  (Thu Feb 16 10:35:37 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_seljet_16 = new TCanvas("Z_dR_seljet_16", "Z_dR_seljet_16",0,0,600,600);
   Z_dR_seljet_16->SetHighLightColor(2);
   Z_dR_seljet_16->Range(-1.310117,-5.249778e+07,7.029799,3.849837e+08);
   Z_dR_seljet_16->SetFillColor(0);
   Z_dR_seljet_16->SetFillStyle(4000);
   Z_dR_seljet_16->SetBorderMode(0);
   Z_dR_seljet_16->SetBorderSize(2);
   Z_dR_seljet_16->SetLeftMargin(0.15709);
   Z_dR_seljet_16->SetRightMargin(0.1234783);
   Z_dR_seljet_16->SetBottomMargin(0.12);
   Z_dR_seljet_16->SetFrameFillStyle(1000);
   Z_dR_seljet_16->SetFrameBorderMode(0);
   Z_dR_seljet_16->SetFrameFillStyle(1000);
   Z_dR_seljet_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(3.412356e+08);
   
   TH1F *st_stack_273 = new TH1F("st_stack_273","",30,0,6);
   st_stack_273->SetMinimum(0);
   st_stack_273->SetMaximum(3.412356e+08);
   st_stack_273->SetDirectory(0);
   st_stack_273->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_273->SetLineColor(ci);
   st_stack_273->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_273->GetXaxis()->SetRange(1,30);
   st_stack_273->GetXaxis()->SetLabelFont(42);
   st_stack_273->GetXaxis()->SetTitleOffset(1);
   st_stack_273->GetXaxis()->SetTitleFont(42);
   st_stack_273->GetYaxis()->SetTitle("Events/0.2");
   st_stack_273->GetYaxis()->SetLabelFont(42);
   st_stack_273->GetYaxis()->SetTitleSize(0.037);
   st_stack_273->GetYaxis()->SetTitleFont(42);
   st_stack_273->GetZaxis()->SetLabelFont(42);
   st_stack_273->GetZaxis()->SetTitleOffset(1);
   st_stack_273->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_273);
   
   
   TH1D *VbbHcc_seljet_Z_dR_stack_1 = new TH1D("VbbHcc_seljet_Z_dR_stack_1","",30,0,6);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(2,137159.3);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(3,8.566333e+07);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(4,1.215541e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(5,1.013065e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(6,9.783685e+07);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(7,9.920399e+07);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(8,1.037249e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(9,1.115468e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(10,1.210627e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(11,1.348708e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(12,1.51593e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(13,1.7273e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(14,1.96394e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(15,2.173084e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(16,2.266911e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(17,1.434112e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(18,1.017318e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(19,7.437499e+07);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(20,5.507004e+07);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(21,4.011257e+07);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(22,2.813811e+07);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(23,1.8695e+07);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(24,1.20901e+07);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(25,6816011);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(26,3542223);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(27,1551475);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(28,438567.8);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(29,22964.68);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(2,9886.677);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(3,328360.1);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(4,421807.1);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(5,411978.5);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(6,389177.4);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(7,391746.3);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(8,418158.2);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(9,450131.3);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(10,459452.7);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(11,488672.2);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(12,499423.3);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(13,558041.1);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(14,612192.2);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(15,650549.6);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(16,704515.6);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(17,543944.6);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(18,464678.8);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(19,400704.5);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(20,350010.4);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(21,312999.3);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(22,263101.3);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(23,194376.9);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(24,169662.6);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(25,124224.9);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(26,101664.4);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(27,67826.51);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(28,29906.07);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(29,4322.854);
   VbbHcc_seljet_Z_dR_stack_1->SetEntries(3.879266e+07);

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
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(2,205.1969);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(3,169999.1);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(4,333436.4);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(5,435443.1);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(6,535449.4);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(7,594704.9);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(8,614237);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(9,618760.6);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(10,628361.4);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(11,651051);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(12,685836.9);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(13,728451.2);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(14,774606.8);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(15,819462.9);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(16,799236.1);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(17,431580.4);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(18,262239.3);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(19,169513.3);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(20,110548.9);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(21,71465.75);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(22,45006.92);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(23,27412.43);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(24,15706.86);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(25,8138.893);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(26,3800.136);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(27,1489.274);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(28,369.4181);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(29,22.52749);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(2,3.756593);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(3,109.2211);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(4,153.5981);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(5,175.8645);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(6,195.0454);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(7,205.5098);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(8,208.7897);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(9,209.5688);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(10,211.3037);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(11,215.2999);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(12,221.2765);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(13,228.3829);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(14,235.8557);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(15,242.9208);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(16,240.111);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(17,176.1491);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(18,137.0071);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(19,109.843);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(20,88.42009);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(21,70.87505);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(22,56.03469);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(23,43.57661);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(24,32.84688);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(25,23.57502);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(26,16.03467);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(27,9.97825);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(28,4.926495);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(29,1.225656);
   VbbHcc_seljet_Z_dR_stack_2->SetEntries(1.410885e+08);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_seljet_16->Modified();
   Z_dR_seljet_16->cd();
   Z_dR_seljet_16->SetSelected(Z_dR_seljet_16);
}
