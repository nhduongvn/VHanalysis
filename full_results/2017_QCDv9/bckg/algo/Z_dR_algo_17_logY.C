#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_algo_17_logY()
{
//=========Macro generated from canvas: Z_dR_algo_17/Z_dR_algo_17
//=========  (Mon Dec 19 11:15:38 2022) by ROOT version 6.26/06
   TCanvas *Z_dR_algo_17 = new TCanvas("Z_dR_algo_17", "Z_dR_algo_17",0,0,600,600);
   Z_dR_algo_17->SetHighLightColor(2);
   Z_dR_algo_17->Range(-1.310117,-0.9057494,7.029799,9.501072);
   Z_dR_algo_17->SetFillColor(0);
   Z_dR_algo_17->SetFillStyle(4000);
   Z_dR_algo_17->SetBorderMode(0);
   Z_dR_algo_17->SetBorderSize(2);
   Z_dR_algo_17->SetLogy();
   Z_dR_algo_17->SetLeftMargin(0.15709);
   Z_dR_algo_17->SetRightMargin(0.1234783);
   Z_dR_algo_17->SetBottomMargin(0.12);
   Z_dR_algo_17->SetFrameFillStyle(1000);
   Z_dR_algo_17->SetFrameBorderMode(0);
   Z_dR_algo_17->SetFrameFillStyle(1000);
   Z_dR_algo_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(1.195052e+08);
   
   TH1F *st_stack_74 = new TH1F("st_stack_74","",30,0,6);
   st_stack_74->SetMinimum(2.203277);
   st_stack_74->SetMaximum(2.88662e+08);
   st_stack_74->SetDirectory(0);
   st_stack_74->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_74->SetLineColor(ci);
   st_stack_74->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_74->GetXaxis()->SetRange(1,30);
   st_stack_74->GetXaxis()->SetLabelFont(42);
   st_stack_74->GetXaxis()->SetTitleOffset(1);
   st_stack_74->GetXaxis()->SetTitleFont(42);
   st_stack_74->GetYaxis()->SetTitle("Events/0.2");
   st_stack_74->GetYaxis()->SetLabelFont(42);
   st_stack_74->GetYaxis()->SetTitleSize(0.037);
   st_stack_74->GetYaxis()->SetTitleFont(42);
   st_stack_74->GetZaxis()->SetLabelFont(42);
   st_stack_74->GetZaxis()->SetTitleOffset(1);
   st_stack_74->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_74);
   
   
   TH1D *VbbHcc_algo_Z_dR_stack_1 = new TH1D("VbbHcc_algo_Z_dR_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(2,117.9152);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(3,833478.3);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(4,1187963);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(5,873323.2);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(6,694437.6);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(7,715496.4);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(8,796240.9);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(9,553093.1);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(10,605024.1);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(11,575112);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(12,569535.3);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(13,418177.2);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(14,560435);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(15,387347.7);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(16,352218.1);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(17,236488.8);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(18,146121);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(19,102199.5);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(20,25375.79);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(21,13660.57);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(22,10370.87);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(23,2768.638);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(24,1122.882);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(25,392.1471);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(26,234.8265);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(27,13.46878);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(2,52.68842);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(3,60930.83);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(4,86485.49);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(5,73110.5);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(6,64001.24);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(7,71309.74);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(8,85244.47);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(9,64264.08);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(10,73134.75);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(11,72494.53);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(12,77173.7);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(13,58924.05);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(14,82232.7);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(15,57166.51);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(16,55178.42);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(17,48768.24);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(18,38033.63);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(19,33012.82);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(20,4986.486);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(21,3163.848);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(22,3392.935);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(23,838.6622);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(24,438.9461);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(25,314.4336);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(26,189.3598);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(27,9.135308);
   VbbHcc_algo_Z_dR_stack_1->SetEntries(44389);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_2 = new TH1D("VbbHcc_algo_Z_dR_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(2,2.680463);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(3,3100.826);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(4,7089.039);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(5,9420.31);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(6,11857.73);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(7,13463.38);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(8,14269.74);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(9,14204.64);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(10,13328.6);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(11,12164.52);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(12,10716.88);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(13,9419.679);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(14,8291.014);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(15,7442.987);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(16,6374.559);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(17,2976.598);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(18,1491.351);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(19,765.1302);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(20,391.7707);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(21,203.5415);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(22,91.47213);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(23,42.24154);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(24,15.92591);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(25,7.026479);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(26,2.274246);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(27,0.6835988);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(28,0.1797055);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(2,0.4261346);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(3,14.73039);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(4,22.26395);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(5,25.69269);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(6,28.81098);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(7,30.7165);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(8,31.59165);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(9,31.44785);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(10,30.3977);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(11,28.98665);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(12,27.09572);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(13,25.3231);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(14,23.68019);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(15,22.34312);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(16,20.6337);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(17,14.07063);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(18,9.94483);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(19,7.096504);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(20,5.045968);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(21,3.63482);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(22,2.42802);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(23,1.642696);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(24,0.9758113);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(25,0.6709214);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(26,0.3672401);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(27,0.1889504);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(28,0.1091454);
   VbbHcc_algo_Z_dR_stack_2->SetEntries(2378377);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_1","QCD","F");

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
   Z_dR_algo_17->Modified();
   Z_dR_algo_17->cd();
   Z_dR_algo_17->SetSelected(Z_dR_algo_17);
}
