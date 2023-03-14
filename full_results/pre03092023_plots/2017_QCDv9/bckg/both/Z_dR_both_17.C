#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_both_17()
{
//=========Macro generated from canvas: Z_dR_both_17/Z_dR_both_17
//=========  (Thu Feb 16 10:35:34 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_both_17 = new TCanvas("Z_dR_both_17", "Z_dR_both_17",0,0,600,600);
   Z_dR_both_17->SetHighLightColor(2);
   Z_dR_both_17->Range(-1.310117,-177293.3,7.029799,1300151);
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
   st->SetMaximum(1152406);
   
   TH1F *st_stack_146 = new TH1F("st_stack_146","",30,0,6);
   st_stack_146->SetMinimum(0);
   st_stack_146->SetMaximum(1152406);
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
   VbbHcc_both_Z_dR_stack_1->SetBinContent(2,1188.595);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(3,677181.7);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(4,708478.6);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(5,491854.2);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(6,493291);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(7,471216.5);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(8,365432.6);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(9,330255.7);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(10,340153.8);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(11,363596.9);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(12,378061);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(13,435347.4);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(14,519316.2);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(15,583425.5);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(16,641840.2);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(17,329272.2);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(18,193236);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(19,164090.2);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(20,88068.34);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(21,60202.85);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(22,37888.7);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(23,30713.65);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(24,23021.32);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(25,5047.832);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(26,1645.469);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(27,2573.961);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(28,525.4746);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(29,9.277254);
   VbbHcc_both_Z_dR_stack_1->SetBinError(2,515.0635);
   VbbHcc_both_Z_dR_stack_1->SetBinError(3,15979.85);
   VbbHcc_both_Z_dR_stack_1->SetBinError(4,22507.21);
   VbbHcc_both_Z_dR_stack_1->SetBinError(5,14994);
   VbbHcc_both_Z_dR_stack_1->SetBinError(6,35249.36);
   VbbHcc_both_Z_dR_stack_1->SetBinError(7,41490.24);
   VbbHcc_both_Z_dR_stack_1->SetBinError(8,26743.48);
   VbbHcc_both_Z_dR_stack_1->SetBinError(9,12572.26);
   VbbHcc_both_Z_dR_stack_1->SetBinError(10,12839.13);
   VbbHcc_both_Z_dR_stack_1->SetBinError(11,20952.63);
   VbbHcc_both_Z_dR_stack_1->SetBinError(12,24768.27);
   VbbHcc_both_Z_dR_stack_1->SetBinError(13,32736.33);
   VbbHcc_both_Z_dR_stack_1->SetBinError(14,41630.1);
   VbbHcc_both_Z_dR_stack_1->SetBinError(15,38658.03);
   VbbHcc_both_Z_dR_stack_1->SetBinError(16,47953.43);
   VbbHcc_both_Z_dR_stack_1->SetBinError(17,27845.62);
   VbbHcc_both_Z_dR_stack_1->SetBinError(18,9833.429);
   VbbHcc_both_Z_dR_stack_1->SetBinError(19,21312.82);
   VbbHcc_both_Z_dR_stack_1->SetBinError(20,6285.487);
   VbbHcc_both_Z_dR_stack_1->SetBinError(21,5369.222);
   VbbHcc_both_Z_dR_stack_1->SetBinError(22,4646.156);
   VbbHcc_both_Z_dR_stack_1->SetBinError(23,4195.856);
   VbbHcc_both_Z_dR_stack_1->SetBinError(24,4121.048);
   VbbHcc_both_Z_dR_stack_1->SetBinError(25,940.2418);
   VbbHcc_both_Z_dR_stack_1->SetBinError(26,457.889);
   VbbHcc_both_Z_dR_stack_1->SetBinError(27,1846.182);
   VbbHcc_both_Z_dR_stack_1->SetBinError(28,351.3188);
   VbbHcc_both_Z_dR_stack_1->SetBinError(29,9.277254);
   VbbHcc_both_Z_dR_stack_1->SetEntries(271661);

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
   VbbHcc_both_Z_dR_stack_2->SetBinContent(2,10.60906);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(3,14474.31);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(4,28260.04);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(5,34444.88);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(6,41343.69);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(7,47498.49);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(8,53516.09);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(9,60094.5);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(10,67935.77);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(11,77521.14);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(12,88825.77);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(13,101752.2);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(14,114743.2);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(15,127050);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(16,126430.6);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(17,64716.98);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(18,35830.43);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(19,20585.28);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(20,11766);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(21,6569.524);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(22,3589.709);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(23,1871.822);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(24,918.0997);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(25,427.3959);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(26,170.9411);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(27,55.11395);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(28,11.64345);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(29,0.8017987);
   VbbHcc_both_Z_dR_stack_2->SetBinError(2,0.8796656);
   VbbHcc_both_Z_dR_stack_2->SetBinError(3,33.06304);
   VbbHcc_both_Z_dR_stack_2->SetBinError(4,46.31834);
   VbbHcc_both_Z_dR_stack_2->SetBinError(5,51.16783);
   VbbHcc_both_Z_dR_stack_2->SetBinError(6,56.0596);
   VbbHcc_both_Z_dR_stack_2->SetBinError(7,60.10771);
   VbbHcc_both_Z_dR_stack_2->SetBinError(8,63.77847);
   VbbHcc_both_Z_dR_stack_2->SetBinError(9,67.60137);
   VbbHcc_both_Z_dR_stack_2->SetBinError(10,71.89567);
   VbbHcc_both_Z_dR_stack_2->SetBinError(11,76.87085);
   VbbHcc_both_Z_dR_stack_2->SetBinError(12,82.37137);
   VbbHcc_both_Z_dR_stack_2->SetBinError(13,88.26798);
   VbbHcc_both_Z_dR_stack_2->SetBinError(14,93.8869);
   VbbHcc_both_Z_dR_stack_2->SetBinError(15,98.92183);
   VbbHcc_both_Z_dR_stack_2->SetBinError(16,98.80437);
   VbbHcc_both_Z_dR_stack_2->SetBinError(17,70.72658);
   VbbHcc_both_Z_dR_stack_2->SetBinError(18,52.63876);
   VbbHcc_both_Z_dR_stack_2->SetBinError(19,39.89212);
   VbbHcc_both_Z_dR_stack_2->SetBinError(20,30.13395);
   VbbHcc_both_Z_dR_stack_2->SetBinError(21,22.48514);
   VbbHcc_both_Z_dR_stack_2->SetBinError(22,16.60008);
   VbbHcc_both_Z_dR_stack_2->SetBinError(23,11.91929);
   VbbHcc_both_Z_dR_stack_2->SetBinError(24,8.283199);
   VbbHcc_both_Z_dR_stack_2->SetBinError(25,5.632404);
   VbbHcc_both_Z_dR_stack_2->SetBinError(26,3.555859);
   VbbHcc_both_Z_dR_stack_2->SetBinError(27,1.968058);
   VbbHcc_both_Z_dR_stack_2->SetBinError(28,0.8760675);
   VbbHcc_both_Z_dR_stack_2->SetBinError(29,0.236224);
   VbbHcc_both_Z_dR_stack_2->SetEntries(1.622886e+07);

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
