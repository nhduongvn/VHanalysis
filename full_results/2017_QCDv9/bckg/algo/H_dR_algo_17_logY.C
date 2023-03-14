#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_algo_17_logY()
{
//=========Macro generated from canvas: H_dR_algo_17/H_dR_algo_17
//=========  (Thu Mar  9 13:18:02 2023) by ROOT version 6.26/06
   TCanvas *H_dR_algo_17 = new TCanvas("H_dR_algo_17", "H_dR_algo_17",0,0,600,600);
   H_dR_algo_17->SetHighLightColor(2);
   H_dR_algo_17->Range(-1.353788,-0.2228211,7.264125,5.948045);
   H_dR_algo_17->SetFillColor(0);
   H_dR_algo_17->SetFillStyle(4000);
   H_dR_algo_17->SetBorderMode(0);
   H_dR_algo_17->SetBorderSize(2);
   H_dR_algo_17->SetLogy();
   H_dR_algo_17->SetLeftMargin(0.15709);
   H_dR_algo_17->SetRightMargin(0.1234783);
   H_dR_algo_17->SetBottomMargin(0.12);
   H_dR_algo_17->SetFrameFillStyle(1000);
   H_dR_algo_17->SetFrameBorderMode(0);
   H_dR_algo_17->SetFrameFillStyle(1000);
   H_dR_algo_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(118090.5);
   
   TH1F *st_stack_86 = new TH1F("st_stack_86","",30,0,6);
   st_stack_86->SetMinimum(3.293691);
   st_stack_86->SetMaximum(214268.5);
   st_stack_86->SetDirectory(0);
   st_stack_86->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_86->SetLineColor(ci);
   st_stack_86->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_86->GetXaxis()->SetRange(1,31);
   st_stack_86->GetXaxis()->SetLabelFont(42);
   st_stack_86->GetXaxis()->SetTitleOffset(1);
   st_stack_86->GetXaxis()->SetTitleFont(42);
   st_stack_86->GetYaxis()->SetTitle("Event/0.2");
   st_stack_86->GetYaxis()->SetLabelFont(42);
   st_stack_86->GetYaxis()->SetTitleSize(0.037);
   st_stack_86->GetYaxis()->SetTitleFont(42);
   st_stack_86->GetZaxis()->SetLabelFont(42);
   st_stack_86->GetZaxis()->SetTitleOffset(1);
   st_stack_86->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_86);
   
   
   TH1D *VbbHcc_algo_H_dR_stack_1 = new TH1D("VbbHcc_algo_H_dR_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(3,65686.43);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(4,69232.66);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(5,55780.67);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(6,67554.97);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(7,60850.34);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(8,74296.42);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(9,87044.56);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(10,87325.68);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(11,90940.78);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(12,89922.23);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(13,78286.65);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(14,79075.28);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(15,84155.69);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(16,93549);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(17,44222.23);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(18,51158);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(19,18428.46);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(20,10784.68);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(21,8684.792);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(22,1114.318);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(23,989.8532);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(24,150.2832);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(25,49.23759);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(26,351.898);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(27,17.57758);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(28,3.752867);
   VbbHcc_algo_H_dR_stack_1->SetBinError(3,5533.377);
   VbbHcc_algo_H_dR_stack_1->SetBinError(4,6393.754);
   VbbHcc_algo_H_dR_stack_1->SetBinError(5,5421.839);
   VbbHcc_algo_H_dR_stack_1->SetBinError(6,6597.52);
   VbbHcc_algo_H_dR_stack_1->SetBinError(7,5839.673);
   VbbHcc_algo_H_dR_stack_1->SetBinError(8,12971.84);
   VbbHcc_algo_H_dR_stack_1->SetBinError(9,17324.54);
   VbbHcc_algo_H_dR_stack_1->SetBinError(10,19603.58);
   VbbHcc_algo_H_dR_stack_1->SetBinError(11,18778.29);
   VbbHcc_algo_H_dR_stack_1->SetBinError(12,17994.99);
   VbbHcc_algo_H_dR_stack_1->SetBinError(13,6434.331);
   VbbHcc_algo_H_dR_stack_1->SetBinError(14,6388.49);
   VbbHcc_algo_H_dR_stack_1->SetBinError(15,6600.364);
   VbbHcc_algo_H_dR_stack_1->SetBinError(16,21529.84);
   VbbHcc_algo_H_dR_stack_1->SetBinError(17,4560.929);
   VbbHcc_algo_H_dR_stack_1->SetBinError(18,17676.51);
   VbbHcc_algo_H_dR_stack_1->SetBinError(19,3116.724);
   VbbHcc_algo_H_dR_stack_1->SetBinError(20,2019.606);
   VbbHcc_algo_H_dR_stack_1->SetBinError(21,2725.607);
   VbbHcc_algo_H_dR_stack_1->SetBinError(22,242.9341);
   VbbHcc_algo_H_dR_stack_1->SetBinError(23,348.4526);
   VbbHcc_algo_H_dR_stack_1->SetBinError(24,50.44301);
   VbbHcc_algo_H_dR_stack_1->SetBinError(25,25.69929);
   VbbHcc_algo_H_dR_stack_1->SetBinError(26,295.4523);
   VbbHcc_algo_H_dR_stack_1->SetBinError(27,12.45291);
   VbbHcc_algo_H_dR_stack_1->SetBinError(28,3.752867);
   VbbHcc_algo_H_dR_stack_1->SetEntries(25364);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_2 = new TH1D("VbbHcc_algo_H_dR_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(2,0.9044245);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(3,1538.181);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(4,3075.531);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(5,3780.086);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(6,4275.406);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(7,4475.868);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(8,4527.282);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(9,4663.089);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(10,4810.306);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(11,5045.638);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(12,5280.862);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(13,5381.652);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(14,5192.552);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(15,4943.605);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(16,4466.106);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(17,2681.665);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(18,1633.27);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(19,989.5351);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(20,573.7877);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(21,330.7007);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(22,165.3654);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(23,86.34613);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(24,35.6125);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(25,13.61546);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(26,3.861222);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(27,1.353269);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(28,0.07888197);
   VbbHcc_algo_H_dR_stack_2->SetBinError(2,0.2734187);
   VbbHcc_algo_H_dR_stack_2->SetBinError(3,10.38658);
   VbbHcc_algo_H_dR_stack_2->SetBinError(4,14.71967);
   VbbHcc_algo_H_dR_stack_2->SetBinError(5,16.39133);
   VbbHcc_algo_H_dR_stack_2->SetBinError(6,17.49089);
   VbbHcc_algo_H_dR_stack_2->SetBinError(7,17.99196);
   VbbHcc_algo_H_dR_stack_2->SetBinError(8,18.17427);
   VbbHcc_algo_H_dR_stack_2->SetBinError(9,18.48626);
   VbbHcc_algo_H_dR_stack_2->SetBinError(10,18.75741);
   VbbHcc_algo_H_dR_stack_2->SetBinError(11,19.1903);
   VbbHcc_algo_H_dR_stack_2->SetBinError(12,19.59435);
   VbbHcc_algo_H_dR_stack_2->SetBinError(13,19.77575);
   VbbHcc_algo_H_dR_stack_2->SetBinError(14,19.37283);
   VbbHcc_algo_H_dR_stack_2->SetBinError(15,18.8433);
   VbbHcc_algo_H_dR_stack_2->SetBinError(16,17.8576);
   VbbHcc_algo_H_dR_stack_2->SetBinError(17,13.76616);
   VbbHcc_algo_H_dR_stack_2->SetBinError(18,10.69044);
   VbbHcc_algo_H_dR_stack_2->SetBinError(19,8.268929);
   VbbHcc_algo_H_dR_stack_2->SetBinError(20,6.252459);
   VbbHcc_algo_H_dR_stack_2->SetBinError(21,4.719917);
   VbbHcc_algo_H_dR_stack_2->SetBinError(22,3.319059);
   VbbHcc_algo_H_dR_stack_2->SetBinError(23,2.367502);
   VbbHcc_algo_H_dR_stack_2->SetBinError(24,1.507755);
   VbbHcc_algo_H_dR_stack_2->SetBinError(25,0.9268029);
   VbbHcc_algo_H_dR_stack_2->SetBinError(26,0.4902929);
   VbbHcc_algo_H_dR_stack_2->SetBinError(27,0.2996102);
   VbbHcc_algo_H_dR_stack_2->SetBinError(28,0.05580278);
   VbbHcc_algo_H_dR_stack_2->SetEntries(1058517);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_1","QCD","F");

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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_algo_17->Modified();
   H_dR_algo_17->cd();
   H_dR_algo_17->SetSelected(H_dR_algo_17);
}
