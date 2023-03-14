#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_pt_algo_all()
{
//=========Macro generated from canvas: Z_pt_algo_all/Z_pt_algo_all
//=========  (Thu Feb 16 10:35:19 2023) by ROOT version 6.26/06
   TCanvas *Z_pt_algo_all = new TCanvas("Z_pt_algo_all", "Z_pt_algo_all",0,0,600,600);
   Z_pt_algo_all->SetHighLightColor(2);
   Z_pt_algo_all->Range(37.97653,-0.3329322,1705.96,2.441503);
   Z_pt_algo_all->SetFillColor(0);
   Z_pt_algo_all->SetFillStyle(4000);
   Z_pt_algo_all->SetBorderMode(0);
   Z_pt_algo_all->SetBorderSize(2);
   Z_pt_algo_all->SetLeftMargin(0.15709);
   Z_pt_algo_all->SetRightMargin(0.1234783);
   Z_pt_algo_all->SetBottomMargin(0.12);
   Z_pt_algo_all->SetFrameFillStyle(1000);
   Z_pt_algo_all->SetFrameBorderMode(0);
   Z_pt_algo_all->SetFrameFillStyle(1000);
   Z_pt_algo_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(2.164059);
   
   TH1F *st_stack_76 = new TH1F("st_stack_76","",40,0,2000);
   st_stack_76->SetMinimum(0);
   st_stack_76->SetMaximum(2.164059);
   st_stack_76->SetDirectory(0);
   st_stack_76->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_76->SetLineColor(ci);
   st_stack_76->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   st_stack_76->GetXaxis()->SetRange(7,30);
   st_stack_76->GetXaxis()->SetLabelFont(42);
   st_stack_76->GetXaxis()->SetTitleOffset(1);
   st_stack_76->GetXaxis()->SetTitleFont(42);
   st_stack_76->GetYaxis()->SetTitle("Events/50.0");
   st_stack_76->GetYaxis()->SetLabelFont(42);
   st_stack_76->GetYaxis()->SetTitleSize(0.037);
   st_stack_76->GetYaxis()->SetTitleFont(42);
   st_stack_76->GetZaxis()->SetLabelFont(42);
   st_stack_76->GetZaxis()->SetTitleOffset(1);
   st_stack_76->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_76);
   
   
   TH1D *VbbHcc_algo_Z_pt_all_stack_1 = new TH1D("VbbHcc_algo_Z_pt_all_stack_1","",40,0,2000);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinContent(1,0.1146419);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinContent(2,0.5800996);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinContent(3,1.442706);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinContent(4,1.037915);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinContent(5,0.6697771);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinContent(6,0.3992385);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinContent(7,0.2104309);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinContent(8,0.1454431);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinContent(9,0.06576814);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinContent(10,0.01780702);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinContent(11,0.02011963);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinContent(12,0.006322688);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinContent(13,0.007627233);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinContent(14,0.001848645);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinContent(17,0.009651359);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinError(1,0.01663376);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinError(2,0.03785565);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinError(3,0.06102007);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinError(4,0.06329072);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinError(5,0.04154961);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinError(6,0.0325079);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinError(7,0.02302138);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinError(8,0.0192937);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinError(9,0.01321705);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinError(10,0.006924642);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinError(11,0.007247465);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinError(12,0.003699796);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinError(13,0.004510423);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinError(14,0.001848645);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinError(17,0.007143407);
   VbbHcc_algo_Z_pt_all_stack_1->SetEntries(2165);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_pt_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_pt_all_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_pt_all_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_Z_pt_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_pt_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_pt_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_pt_all_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_pt_all_stack_2 = new TH1D("VbbHcc_algo_Z_pt_all_stack_2","",40,0,2000);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(1,0.02911775);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(2,0.1558133);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(3,0.5755424);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(4,0.4527724);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(5,0.2418502);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(6,0.1169642);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(7,0.04972081);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(8,0.02455516);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(9,0.008324566);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(10,0.002429269);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(11,0.0008550294);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(12,0.0008799494);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(1,0.003073492);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(2,0.007045255);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(3,0.01400723);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(4,0.01245439);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(5,0.008807718);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(6,0.00667264);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(7,0.004001804);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(8,0.002884952);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(9,0.001635211);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(10,0.0009286793);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(11,0.0004962328);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(12,0.0005180826);
   VbbHcc_algo_Z_pt_all_stack_2->SetEntries(5547);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_pt_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_pt_all_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_pt_all_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_Z_pt_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_pt_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_pt_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_pt_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_pt_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_pt_all_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_pt_algo_all->Modified();
   Z_pt_algo_all->cd();
   Z_pt_algo_all->SetSelected(Z_pt_algo_all);
}
