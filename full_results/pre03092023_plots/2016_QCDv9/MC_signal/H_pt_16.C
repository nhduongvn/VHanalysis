#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_pt_16()
{
//=========Macro generated from canvas: H_pt_16/H_pt_16
//=========  (Thu Feb 16 13:12:21 2023) by ROOT version 6.26/06
   TCanvas *H_pt_16 = new TCanvas("H_pt_16", "H_pt_16",0,0,600,600);
   H_pt_16->SetHighLightColor(2);
   H_pt_16->Range(37.97653,-0.2091134,1705.96,1.533498);
   H_pt_16->SetFillColor(0);
   H_pt_16->SetFillStyle(4000);
   H_pt_16->SetBorderMode(0);
   H_pt_16->SetBorderSize(2);
   H_pt_16->SetLeftMargin(0.15709);
   H_pt_16->SetRightMargin(0.1234783);
   H_pt_16->SetBottomMargin(0.12);
   H_pt_16->SetFrameFillStyle(1000);
   H_pt_16->SetFrameBorderMode(0);
   H_pt_16->SetFrameFillStyle(1000);
   H_pt_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   
   TH1F *st_stack_55 = new TH1F("st_stack_55","",40,0,2000);
   st_stack_55->SetMinimum(0);
   st_stack_55->SetMaximum(1.359237);
   st_stack_55->SetDirectory(0);
   st_stack_55->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_55->SetLineColor(ci);
   st_stack_55->GetXaxis()->SetTitle("H p_{T} [GeV]");
   st_stack_55->GetXaxis()->SetRange(7,30);
   st_stack_55->GetXaxis()->SetLabelFont(42);
   st_stack_55->GetXaxis()->SetTitleOffset(1);
   st_stack_55->GetXaxis()->SetTitleFont(42);
   st_stack_55->GetYaxis()->SetTitle("Events/50.0");
   st_stack_55->GetYaxis()->SetLabelFont(42);
   st_stack_55->GetYaxis()->SetTitleSize(0.037);
   st_stack_55->GetYaxis()->SetTitleFont(42);
   st_stack_55->GetZaxis()->SetLabelFont(42);
   st_stack_55->GetZaxis()->SetTitleOffset(1);
   st_stack_55->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_55);
   
   
   TH1D *VbbHcc_MC_H_pt_stack_1 = new TH1D("VbbHcc_MC_H_pt_stack_1","",40,0,2000);
   VbbHcc_MC_H_pt_stack_1->SetBinContent(1,45.01838);
   VbbHcc_MC_H_pt_stack_1->SetBinContent(2,56.51428);
   VbbHcc_MC_H_pt_stack_1->SetBinContent(3,26.30295);
   VbbHcc_MC_H_pt_stack_1->SetBinContent(4,10.67238);
   VbbHcc_MC_H_pt_stack_1->SetBinContent(5,4.598651);
   VbbHcc_MC_H_pt_stack_1->SetBinContent(6,2.019299);
   VbbHcc_MC_H_pt_stack_1->SetBinContent(7,0.918309);
   VbbHcc_MC_H_pt_stack_1->SetBinContent(8,0.5286301);
   VbbHcc_MC_H_pt_stack_1->SetBinContent(9,0.2977659);
   VbbHcc_MC_H_pt_stack_1->SetBinContent(10,0.1348914);
   VbbHcc_MC_H_pt_stack_1->SetBinContent(11,0.08203773);
   VbbHcc_MC_H_pt_stack_1->SetBinContent(12,0.05776416);
   VbbHcc_MC_H_pt_stack_1->SetBinContent(13,0.02289713);
   VbbHcc_MC_H_pt_stack_1->SetBinContent(14,0.02080729);
   VbbHcc_MC_H_pt_stack_1->SetBinContent(15,0.00918044);
   VbbHcc_MC_H_pt_stack_1->SetBinContent(16,0.01251818);
   VbbHcc_MC_H_pt_stack_1->SetBinContent(17,0.008644017);
   VbbHcc_MC_H_pt_stack_1->SetBinContent(18,0.005473954);
   VbbHcc_MC_H_pt_stack_1->SetBinContent(21,0.003032998);
   VbbHcc_MC_H_pt_stack_1->SetBinError(1,0.3774223);
   VbbHcc_MC_H_pt_stack_1->SetBinError(2,0.4196694);
   VbbHcc_MC_H_pt_stack_1->SetBinError(3,0.2839839);
   VbbHcc_MC_H_pt_stack_1->SetBinError(4,0.1792734);
   VbbHcc_MC_H_pt_stack_1->SetBinError(5,0.1176787);
   VbbHcc_MC_H_pt_stack_1->SetBinError(6,0.07779385);
   VbbHcc_MC_H_pt_stack_1->SetBinError(7,0.05194139);
   VbbHcc_MC_H_pt_stack_1->SetBinError(8,0.03961317);
   VbbHcc_MC_H_pt_stack_1->SetBinError(9,0.03110833);
   VbbHcc_MC_H_pt_stack_1->SetBinError(10,0.02041735);
   VbbHcc_MC_H_pt_stack_1->SetBinError(11,0.01554846);
   VbbHcc_MC_H_pt_stack_1->SetBinError(12,0.01366428);
   VbbHcc_MC_H_pt_stack_1->SetBinError(13,0.009284271);
   VbbHcc_MC_H_pt_stack_1->SetBinError(14,0.009002008);
   VbbHcc_MC_H_pt_stack_1->SetBinError(15,0.005306173);
   VbbHcc_MC_H_pt_stack_1->SetBinError(16,0.0074693);
   VbbHcc_MC_H_pt_stack_1->SetBinError(17,0.00499074);
   VbbHcc_MC_H_pt_stack_1->SetBinError(18,0.00388815);
   VbbHcc_MC_H_pt_stack_1->SetBinError(21,0.003032998);
   VbbHcc_MC_H_pt_stack_1->SetEntries(54432);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_MC_H_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_MC_H_pt_stack_1->SetLineColor(ci);
   VbbHcc_MC_H_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_MC_H_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_MC_H_pt_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_MC_H_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_MC_H_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_MC_H_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_MC_H_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_MC_H_pt_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_MC_H_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_MC_H_pt_stack_1,"");
   
   TH1D *VbbHcc_MC_H_pt_stack_2 = new TH1D("VbbHcc_MC_H_pt_stack_2","",40,0,2000);
   VbbHcc_MC_H_pt_stack_2->SetBinContent(1,1.529669);
   VbbHcc_MC_H_pt_stack_2->SetBinContent(2,4.670342);
   VbbHcc_MC_H_pt_stack_2->SetBinContent(3,6.508471);
   VbbHcc_MC_H_pt_stack_2->SetBinContent(4,4.279785);
   VbbHcc_MC_H_pt_stack_2->SetBinContent(5,1.908621);
   VbbHcc_MC_H_pt_stack_2->SetBinContent(6,0.8494659);
   VbbHcc_MC_H_pt_stack_2->SetBinContent(7,0.3762024);
   VbbHcc_MC_H_pt_stack_2->SetBinContent(8,0.1560724);
   VbbHcc_MC_H_pt_stack_2->SetBinContent(9,0.08194333);
   VbbHcc_MC_H_pt_stack_2->SetBinContent(10,0.04061698);
   VbbHcc_MC_H_pt_stack_2->SetBinContent(11,0.01744118);
   VbbHcc_MC_H_pt_stack_2->SetBinContent(12,0.007114905);
   VbbHcc_MC_H_pt_stack_2->SetBinContent(13,0.003805983);
   VbbHcc_MC_H_pt_stack_2->SetBinContent(14,0.00231802);
   VbbHcc_MC_H_pt_stack_2->SetBinContent(15,0.001571832);
   VbbHcc_MC_H_pt_stack_2->SetBinContent(16,0.0002912454);
   VbbHcc_MC_H_pt_stack_2->SetBinContent(17,0.000359818);
   VbbHcc_MC_H_pt_stack_2->SetBinContent(18,0.0003911411);
   VbbHcc_MC_H_pt_stack_2->SetBinContent(23,0.000370343);
   VbbHcc_MC_H_pt_stack_2->SetBinError(1,0.02423029);
   VbbHcc_MC_H_pt_stack_2->SetBinError(2,0.04225424);
   VbbHcc_MC_H_pt_stack_2->SetBinError(3,0.0498944);
   VbbHcc_MC_H_pt_stack_2->SetBinError(4,0.04043592);
   VbbHcc_MC_H_pt_stack_2->SetBinError(5,0.02695041);
   VbbHcc_MC_H_pt_stack_2->SetBinError(6,0.01794145);
   VbbHcc_MC_H_pt_stack_2->SetBinError(7,0.01193982);
   VbbHcc_MC_H_pt_stack_2->SetBinError(8,0.007687143);
   VbbHcc_MC_H_pt_stack_2->SetBinError(9,0.005555365);
   VbbHcc_MC_H_pt_stack_2->SetBinError(10,0.003955461);
   VbbHcc_MC_H_pt_stack_2->SetBinError(11,0.00257058);
   VbbHcc_MC_H_pt_stack_2->SetBinError(12,0.001618164);
   VbbHcc_MC_H_pt_stack_2->SetBinError(13,0.0012039);
   VbbHcc_MC_H_pt_stack_2->SetBinError(14,0.0009106898);
   VbbHcc_MC_H_pt_stack_2->SetBinError(15,0.0007872283);
   VbbHcc_MC_H_pt_stack_2->SetBinError(16,0.0002912454);
   VbbHcc_MC_H_pt_stack_2->SetBinError(17,0.000359818);
   VbbHcc_MC_H_pt_stack_2->SetBinError(18,0.0003911411);
   VbbHcc_MC_H_pt_stack_2->SetBinError(23,0.000370343);
   VbbHcc_MC_H_pt_stack_2->SetEntries(54504);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_MC_H_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_MC_H_pt_stack_2->SetLineColor(ci);
   VbbHcc_MC_H_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_MC_H_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_MC_H_pt_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_MC_H_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_MC_H_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_MC_H_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_MC_H_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_MC_H_pt_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_MC_H_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_MC_H_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_MC_H_pt_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_MC_H_pt_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_pt_16->Modified();
   H_pt_16->cd();
   H_pt_16->SetSelected(H_pt_16);
}
