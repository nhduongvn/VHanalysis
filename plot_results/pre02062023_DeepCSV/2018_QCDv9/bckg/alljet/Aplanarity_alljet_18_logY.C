#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_alljet_18_logY()
{
//=========Macro generated from canvas: Aplanarity_alljet_18/Aplanarity_alljet_18
//=========  (Wed Jan 18 11:42:56 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_alljet_18 = new TCanvas("Aplanarity_alljet_18", "Aplanarity_alljet_18",0,0,600,600);
   Aplanarity_alljet_18->SetHighLightColor(2);
   Aplanarity_alljet_18->Range(-0.2183529,-2.118232,1.171633,16.54594);
   Aplanarity_alljet_18->SetFillColor(0);
   Aplanarity_alljet_18->SetFillStyle(4000);
   Aplanarity_alljet_18->SetBorderMode(0);
   Aplanarity_alljet_18->SetBorderSize(2);
   Aplanarity_alljet_18->SetLogy();
   Aplanarity_alljet_18->SetLeftMargin(0.15709);
   Aplanarity_alljet_18->SetRightMargin(0.1234783);
   Aplanarity_alljet_18->SetBottomMargin(0.12);
   Aplanarity_alljet_18->SetFrameFillStyle(1000);
   Aplanarity_alljet_18->SetFrameBorderMode(0);
   Aplanarity_alljet_18->SetFrameFillStyle(1000);
   Aplanarity_alljet_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(1.319245e+14);
   
   TH1F *st_stack_255 = new TH1F("st_stack_255","",50,0,1);
   st_stack_255->SetMinimum(1.322723);
   st_stack_255->SetMaximum(4.781029e+14);
   st_stack_255->SetDirectory(0);
   st_stack_255->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_255->SetLineColor(ci);
   st_stack_255->GetXaxis()->SetTitle("Aplanarity");
   st_stack_255->GetXaxis()->SetRange(1,50);
   st_stack_255->GetXaxis()->SetLabelFont(42);
   st_stack_255->GetXaxis()->SetTitleOffset(1);
   st_stack_255->GetXaxis()->SetTitleFont(42);
   st_stack_255->GetYaxis()->SetTitle("Events/0.02");
   st_stack_255->GetYaxis()->SetLabelFont(42);
   st_stack_255->GetYaxis()->SetTitleSize(0.037);
   st_stack_255->GetYaxis()->SetTitleFont(42);
   st_stack_255->GetZaxis()->SetLabelFont(42);
   st_stack_255->GetZaxis()->SetTitleOffset(1);
   st_stack_255->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_255);
   
   
   TH1D *VbbHcc_alljet_Aplanarity_stack_1 = new TH1D("VbbHcc_alljet_Aplanarity_stack_1","",50,0,1);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(0,36588.85);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(1,1.31922e+12);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(2,9.959649e+10);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(3,3.589229e+10);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(4,1.73586e+10);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(5,9.621113e+09);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(6,5.730347e+09);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(7,3.609458e+09);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(8,2.314593e+09);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(9,1.495145e+09);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(10,9.993596e+08);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(11,6.600104e+08);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(12,4.419283e+08);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(13,2.83366e+08);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(14,1.875109e+08);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(15,1.190096e+08);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(16,7.203591e+07);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(17,4.273693e+07);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(18,2.422997e+07);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(19,1.436251e+07);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(20,7045022);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(21,3144095);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(22,1090632);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(23,280690.4);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(24,87163.99);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(25,39.05318);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(0,24488.69);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(1,1.8132e+08);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(2,5.056737e+07);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(3,3.045488e+07);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(4,2.128933e+07);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(5,1.58867e+07);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(6,1.210673e+07);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(7,9855241);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(8,8001328);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(9,6093677);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(10,4961360);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(11,4139105);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(12,3598930);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(13,2671475);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(14,2375642);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(15,1716896);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(16,1313303);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(17,1001291);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(18,765285.3);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(19,641499.2);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(20,480781.8);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(21,270863.1);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(22,176578);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(23,79248.76);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(24,50234.04);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(25,39.05318);
   VbbHcc_alljet_Aplanarity_stack_1->SetEntries(2.479335e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_alljet_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_alljet_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_alljet_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_alljet_Aplanarity_stack_2 = new TH1D("VbbHcc_alljet_Aplanarity_stack_2","",50,0,1);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(0,2.443685);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(1,2.423211e+07);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(2,1.002791e+07);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(3,5929498);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(4,3885076);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(5,2673256);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(6,1888554);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(7,1354822);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(8,978210.6);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(9,707612.7);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(10,510180.8);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(11,365451.3);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(12,259021.5);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(13,180643.6);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(14,123924.3);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(15,82714.18);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(16,53644.92);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(17,33414.74);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(18,19712.59);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(19,10963.85);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(20,5474.141);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(21,2458.249);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(22,901.9609);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(23,244.9694);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(24,33.88928);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(25,1.080059);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(0,0.4482827);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(1,1504.278);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(2,977.3938);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(3,752.7184);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(4,610.8481);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(5,507.1408);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(6,427.1516);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(7,361.6936);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(8,307.3328);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(9,261.8291);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(10,222.0896);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(11,187.7724);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(12,159.372);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(13,132.3243);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(14,109.4498);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(15,90.07517);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(16,72.06435);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(17,56.85651);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(18,43.80964);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(19,32.85752);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(20,23.03259);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(21,15.00987);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(22,9.125105);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(23,4.775974);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(24,1.669056);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(25,0.2972621);
   VbbHcc_alljet_Aplanarity_stack_2->SetEntries(7.166996e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_alljet_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_alljet_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_alljet_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_alljet_Aplanarity_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_alljet_Aplanarity_stack_1","QCD","F");

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
   Aplanarity_alljet_18->Modified();
   Aplanarity_alljet_18->cd();
   Aplanarity_alljet_18->SetSelected(Aplanarity_alljet_18);
}
