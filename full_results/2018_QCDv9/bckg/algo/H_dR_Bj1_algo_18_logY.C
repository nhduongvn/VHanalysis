#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj1_algo_18_logY()
{
//=========Macro generated from canvas: H_dR_Bj1_algo_18/H_dR_Bj1_algo_18
//=========  (Mon Dec 19 11:15:39 2022) by ROOT version 6.26/06
   TCanvas *H_dR_Bj1_algo_18 = new TCanvas("H_dR_Bj1_algo_18", "H_dR_Bj1_algo_18",0,0,600,600);
   H_dR_Bj1_algo_18->SetHighLightColor(2);
   H_dR_Bj1_algo_18->Range(-1.310117,-0.8886039,7.029799,9.407297);
   H_dR_Bj1_algo_18->SetFillColor(0);
   H_dR_Bj1_algo_18->SetFillStyle(4000);
   H_dR_Bj1_algo_18->SetBorderMode(0);
   H_dR_Bj1_algo_18->SetBorderSize(2);
   H_dR_Bj1_algo_18->SetLogy();
   H_dR_Bj1_algo_18->SetLeftMargin(0.15709);
   H_dR_Bj1_algo_18->SetRightMargin(0.1234783);
   H_dR_Bj1_algo_18->SetBottomMargin(0.12);
   H_dR_Bj1_algo_18->SetFrameFillStyle(1000);
   H_dR_Bj1_algo_18->SetFrameBorderMode(0);
   H_dR_Bj1_algo_18->SetFrameFillStyle(1000);
   H_dR_Bj1_algo_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(9.944497e+07);
   
   TH1F *st_stack_103 = new TH1F("st_stack_103","",30,0,6);
   st_stack_103->SetMinimum(2.222819);
   st_stack_103->SetMaximum(2.386198e+08);
   st_stack_103->SetDirectory(0);
   st_stack_103->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_103->SetLineColor(ci);
   st_stack_103->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   st_stack_103->GetXaxis()->SetRange(1,30);
   st_stack_103->GetXaxis()->SetLabelFont(42);
   st_stack_103->GetXaxis()->SetTitleOffset(1);
   st_stack_103->GetXaxis()->SetTitleFont(42);
   st_stack_103->GetYaxis()->SetTitle("Events/0.2");
   st_stack_103->GetYaxis()->SetLabelFont(42);
   st_stack_103->GetYaxis()->SetTitleSize(0.037);
   st_stack_103->GetYaxis()->SetTitleFont(42);
   st_stack_103->GetZaxis()->SetLabelFont(42);
   st_stack_103->GetZaxis()->SetTitleOffset(1);
   st_stack_103->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_103);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(1,1688.584);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(2,451913.8);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(3,979407);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(4,832652.3);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(5,937631.6);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(6,855131.6);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(7,859992.4);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(8,778392.8);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(9,648517.8);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(10,627860.1);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(11,625509);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(12,557517.4);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(13,545436);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(14,443864.1);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(15,314404.1);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(16,326616.3);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(17,180840.5);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(18,142215.2);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(19,142611.1);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(20,73222.51);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(21,31915.35);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(22,34246.57);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(23,33880.7);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(24,5118.29);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(25,1495.868);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(26,844.3724);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(27,93.89353);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(28,10.66125);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(1,1688.584);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(2,53250.61);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(3,96775.51);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(4,91058.96);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(5,94347.03);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(6,91304.84);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(7,93805.98);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(8,88209.4);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(9,75968.6);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(10,75949.07);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(11,81631.87);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(12,72176.29);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(13,71970.73);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(14,64267.2);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(15,34992.62);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(16,41368.66);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(17,25160.33);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(18,32574.03);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(19,39099.45);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(20,23130.56);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(21,5513.028);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(22,22208.43);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(23,22261.2);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(24,2467.187);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(25,615.2053);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(26,497.6424);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(27,48.39998);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(28,7.538641);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetEntries(42604);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_2 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(1,2.701518);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(2,4273.721);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(3,15042.67);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(4,21461.77);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(5,22425.22);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(6,19742.2);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(7,16533.48);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(8,13822.96);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(9,11477.54);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(10,9632.364);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(11,8070.899);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(12,6922.15);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(13,6085.273);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(14,5500.705);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(15,5059.002);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(16,4541.351);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(17,2714.22);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(18,1764.558);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(19,1162.587);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(20,746.8642);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(21,456.7376);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(22,277.5542);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(23,154.987);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(24,84.99731);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(25,40.82033);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(26,19.75486);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(27,8.315767);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(28,3.441258);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(29,1.64485);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(30,1.048442);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(31,1.495271);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(1,0.4141707);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(2,16.67936);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(3,31.33987);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(4,37.6152);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(5,38.7122);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(6,36.52575);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(7,33.56463);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(8,30.72548);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(9,27.98731);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(10,25.59342);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(11,23.37815);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(12,21.62117);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(13,20.21904);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(14,19.21938);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(15,18.40074);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(16,17.42026);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(17,13.45492);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(18,10.82043);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(19,8.773532);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(20,7.022254);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(21,5.483918);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(22,4.279457);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(23,3.202684);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(24,2.366386);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(25,1.640739);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(26,1.13928);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(27,0.7495913);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(28,0.4825871);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(29,0.3290202);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(30,0.273774);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(31,0.3172372);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetEntries(2750781);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_H_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj1_algo_18->Modified();
   H_dR_Bj1_algo_18->cd();
   H_dR_Bj1_algo_18->SetSelected(H_dR_Bj1_algo_18);
}
