#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_pt_algo_16_logY()
{
//=========Macro generated from canvas: Z_pt_algo_16/Z_pt_algo_16
//=========  (Thu Mar  9 13:08:25 2023) by ROOT version 6.26/06
   TCanvas *Z_pt_algo_16 = new TCanvas("Z_pt_algo_16", "Z_pt_algo_16",0,0,600,600);
   Z_pt_algo_16->SetHighLightColor(2);
   Z_pt_algo_16->Range(37.97653,-3.907688,1705.96,-0.06153381);
   Z_pt_algo_16->SetFillColor(0);
   Z_pt_algo_16->SetFillStyle(4000);
   Z_pt_algo_16->SetBorderMode(0);
   Z_pt_algo_16->SetBorderSize(2);
   Z_pt_algo_16->SetLogy();
   Z_pt_algo_16->SetLeftMargin(0.15709);
   Z_pt_algo_16->SetRightMargin(0.1234783);
   Z_pt_algo_16->SetBottomMargin(0.12);
   Z_pt_algo_16->SetFrameFillStyle(1000);
   Z_pt_algo_16->SetFrameBorderMode(0);
   Z_pt_algo_16->SetFrameFillStyle(1000);
   Z_pt_algo_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(0.389871);
   
   TH1F *st_stack_73 = new TH1F("st_stack_73","",40,0,2000);
   st_stack_73->SetMinimum(1.257133);
   st_stack_73->SetMaximum(0.3579734);
   st_stack_73->SetDirectory(0);
   st_stack_73->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_73->SetLineColor(ci);
   st_stack_73->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   st_stack_73->GetXaxis()->SetRange(7,30);
   st_stack_73->GetXaxis()->SetLabelFont(42);
   st_stack_73->GetXaxis()->SetTitleOffset(1);
   st_stack_73->GetXaxis()->SetTitleFont(42);
   st_stack_73->GetYaxis()->SetTitle("Event/50.0 GeV");
   st_stack_73->GetYaxis()->SetLabelFont(42);
   st_stack_73->GetYaxis()->SetTitleSize(0.037);
   st_stack_73->GetYaxis()->SetTitleFont(42);
   st_stack_73->GetZaxis()->SetLabelFont(42);
   st_stack_73->GetZaxis()->SetTitleOffset(1);
   st_stack_73->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_73);
   
   
   TH1D *VbbHcc_algo_Z_pt_stack_1 = new TH1D("VbbHcc_algo_Z_pt_stack_1","",40,0,2000);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(1,0.01494036);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(2,0.1227754);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(3,0.323593);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(4,0.1924386);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(5,0.1328952);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(6,0.06603885);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(7,0.04635576);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(8,0.03285443);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(9,0.01416278);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(10,0.002991137);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(11,0.00572183);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(13,0.003032998);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(1,0.006715207);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(2,0.01885032);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(3,0.03130355);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(4,0.02374051);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(5,0.02009396);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(6,0.01450423);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(7,0.01154596);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(8,0.009955244);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(9,0.006382542);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(10,0.002991137);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(11,0.004079467);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(13,0.003032998);
   VbbHcc_algo_Z_pt_stack_1->SetEntries(339);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_pt_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_Z_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_pt_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_pt_stack_2 = new TH1D("VbbHcc_algo_Z_pt_stack_2","",40,0,2000);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(1,0.004645933);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(2,0.03101904);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(3,0.1182784);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(4,0.08835124);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(5,0.04839097);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(6,0.02687193);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(7,0.008479646);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(8,0.004945779);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(9,0.001181185);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(10,0.0007838537);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(12,0.0003754982);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(1,0.001336513);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(2,0.003419245);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(3,0.006755039);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(4,0.005818694);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(5,0.004336807);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(6,0.003192288);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(7,0.001793032);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(8,0.001373908);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(9,0.0006832861);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(10,0.0005543011);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(12,0.0003754982);
   VbbHcc_algo_Z_pt_stack_2->SetEntries(884);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_pt_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_Z_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_pt_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_pt_stack_1","ZHcc","F");

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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_pt_algo_16->Modified();
   Z_pt_algo_16->cd();
   Z_pt_algo_16->SetSelected(Z_pt_algo_16);
}
